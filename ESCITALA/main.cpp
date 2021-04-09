//
// Created by misash on 26/03/21.
//

#include <iostream>
#include "Escitala.h"

int main(){

    string msj;
    int fila,columna;
    cout<<"Input your message: ";
    getline(cin,msj);
    cout<<"Input your keys: ";
    cin>>fila>>columna;

    Escitala A(fila, columna);
    Escitala B(fila ,columna);

    cout<<"Encrypted message: "<<A.cipher(msj) <<"\n";
    cout<<"decrypted message: "<<B.decipher(A.cipher(msj)) <<"\n";

}

