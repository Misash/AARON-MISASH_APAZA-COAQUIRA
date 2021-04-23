

#include <string>
#include "Cesar.h"
using namespace std;


//ALFABETO
const string alphabet = "abcdefghijklmnopqrstuvwxyz";

//FUNCIÓN MODULO
int64 mod(int64 a,int64 n){
    int64 r= a - n*(a/n);
    if(r<0)
        r=a-n*((a/n)-1);
    return r;
}


Cesar::Cesar(int64 _key) : key(_key){}
Cesar::~Cesar() {}


string Cesar::cipher(string plaintext) {
    string ciphertext;

    for(int64 i=0 ; i<plaintext.size() ; i++){
        unsigned_int64 index = alphabet.find(plaintext[i]);
        char new_value;
        if(index != string::npos){
            new_value = alphabet[mod(index + key , alphabet.size())];
        }
        else{
            new_value = plaintext[i];
        }
        ciphertext.push_back(new_value);
    }
    return ciphertext;
}

string Cesar::decipher(string ciphertext) {
    string plaintext;

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
    return plaintext;
}







