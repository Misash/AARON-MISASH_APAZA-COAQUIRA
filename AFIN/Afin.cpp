
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "myMath.h"
#include "Afin.h"



Afin::Afin() {
    keyGenerator();
}
Afin::Afin(int x, int y) {
    a=inverse(x,alphabet.size());
    b=y;
}
Afin::~Afin() {}

int Afin::aleatory() {
    srand(time(NULL));
    int num = 1 + rand()% 200;
    return num;
}

void Afin::keyGenerator(){
    int n=alphabet.size();
    int x;
    do{
        x=aleatory();
    }while(gcd(x,n) != 1);
    a=x;
    b = mod(aleatory(),n);
}

string Afin::cipher(string plaintext) {

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    string ciphertext;
    int n=plaintext.size();

    for(int i=0;i<n;i++){
        int m = alphabet.find(plaintext[i]);
        char new_value;
        if(m != string::npos){
            new_value = alphabet[mod(a*m+b, alphabet.size())];
        }
        else{
            new_value = plaintext[i];
        }
        ciphertext.push_back(new_value);
    }
    return ciphertext;
}

string Afin::decipher(string ciphertext) {
    string plaintext;
    int n=ciphertext.size();

    for(int i=0;i<n;i++){
        int y = alphabet.find(ciphertext[i]);
        char new_value;
        if(y != string::npos){
            new_value = alphabet[mod(a*(y-b), alphabet.size())];
        }
        else{
            new_value = ciphertext[i];
        }
        plaintext.push_back(new_value);
    }
    return plaintext;
}
