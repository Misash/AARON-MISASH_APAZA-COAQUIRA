//
// Created by misash on 22/04/21.
//
#include <iostream>
#include "Hacking_Cesar.h"
#include <string>

using namespace  std;


//FUNCIÓN MODULO
int64 mod(int64 a,int64 n){
    int64 r= a - n*(a/n);
    if(r<0)
        r=a-n*((a/n)-1);
    return r;
}

Hacking_Cesar::Hacking_Cesar(string _alphabet) : alphabet(_alphabet) {}
Hacking_Cesar::~Hacking_Cesar() {}

void Hacking_Cesar::brute_force(string ciphertext) {

    string plaintext;
    int64 key = alphabet.size()-1;

    while(key >= 0)
    {
        plaintext="";

        for(int64 i=0 ; i<ciphertext.size() ; i++){
            unsigned_int64 index = alphabet.find(ciphertext[i]);
            char new_value;
            if(index != string::npos){
                new_value = alphabet[mod(index - key , alphabet.size())];
            }
            else{
                new_value = ciphertext[i];
            }
            plaintext.push_back(new_value);
        }

        cout<<"KEY #"<<key<<":  "<<plaintext<<"\n";

        key--;
    }

}








