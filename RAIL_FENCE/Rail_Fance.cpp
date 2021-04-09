//
// Created by misash on 6/04/21.
//

#include "Rail_Fance.h"

Rail_Fance::Rail_Fance(int row): key(row) {}
Rail_Fance::~Rail_Fance() {}

string Rail_Fance::cipher(string plaintext){

    if(key==0) return "Is not a valid key";
    if(key==1) return plaintext;

    string ciphertext;
    int n=plaintext.size();
    int a[n];
    int i=0,j=0,x=0;

    while(i<key){
        if(j>=n){
            i++;
            j=i;
            x=0;
        }
        else{
            if(x%2==0 && 2*(key-1-i)!=0){
                ciphertext.push_back(plaintext[j]);
                j+=2*(key-1-i);
            }
            if(x%2!=0 && 2*i!=0){
                ciphertext.push_back(plaintext[j]);
                j+=2*i;
            }
            ++x;
        }
    }
    return ciphertext;
}

string Rail_Fance::decipher(string ciphertext){

    if(key==0) return "Is not a valid key";
    if(key==1) return ciphertext;

    int n=ciphertext.size();
    string plaintext(n, ' ');
    int i=0,j=0,x=0,s=0;


    while(i<key){
        if(j>=n){
            i++;
            j=i;
            x=0;
        }
        else{
            if(x%2==0 && 2*(key-1-i)!=0){
                plaintext[j]=ciphertext[s];
                j+=2*(key-1-i);
                s++;
            }
            if(x%2!=0 && 2*i!=0){
                plaintext[j]=ciphertext[s];;
                j+=2*i;
                s++;
            }
            ++x;
        }
    }
    return plaintext;
}








