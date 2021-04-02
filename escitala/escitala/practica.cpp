
#include "practica.h"


Person::Person(int _rows, int _columns): row(_rows) , column(_columns) {}
Person::~Person() {}


bool Person::cheker(string txt){
    return (txt.size() <= row*column)? 1:0;
}

string Person::cipher(string plaintext){

    if(cheker(plaintext))
    {
        int m = row * column;
        int n = plaintext.size();
        int i = 0, j = 0;
        string ciphertext;

        while (m) {
            if (m % row != 0) {
                j += column;
                ciphertext.push_back((j<n)? plaintext[j]:' ');
            } else {
                ciphertext.push_back(plaintext[i]);
                j = i;
                ++i;
            }
            --m;
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

