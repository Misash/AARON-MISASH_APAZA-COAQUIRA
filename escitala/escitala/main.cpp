//
// Created by misash on 26/03/21.
//

#include <iostream>
#include "practica.h"

int main(){

    string msj="hola como estas   ";
    int f=5,c=6;



    Person A(f, c);
    Person B(f,c);

    cout<<msj<<"\n";

    cout << A.cipher(msj) <<"\n";
    string msj1=A.cipher(msj);
    cout << B.decipher(msj1) <<"\n";


}

