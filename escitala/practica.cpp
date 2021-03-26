
#include "practica.h"


Person::Person(int _rows, int _columns): row(_rows) , column(_columns) {}
Person::~Person() {}

bool Person::cheker(string txt){
    return (txt.size()==row*column)? 1:0;
}

string Person::cipher(string plaintext){
    if(cheker(plaintext)==1)
    {
        int n = plaintext.size();
        int i = 0, j = 0, x = 0;
        string ciphertext;

        while (x < n) {
            if (x % row != 0) {
                j += column;
                ciphertext.push_back(plaintext[j]);
            } else {
                ciphertext.push_back(plaintext[i]);
                j = i;
                ++i;
            }
            ++x;
        }
        return ciphertext;
    }
    else return "there is a problem with the keys";
}

string Person::decipher(string ciphertext) {
    swap(row,column);
    string plaintext=cipher(ciphertext);
    swap(row,column);
    return plaintext;
}








/*
    //string msj="hola_como_estan___";
    string msj="hotomalona___e_cs_";
    int f=6,c=3,n=msj.size();

    int i=0,j=0,x=0;

    while(x<n){
        if(x%f!=0){
            j+=c;
            cout<<msj[j];
        }
        else{
            cout<<msj[i];
            j=i;
            ++i;
        }
        ++x;
    }
*/