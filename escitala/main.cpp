//
// Created by misash on 26/03/21.
//

#include <iostream>
#include "practica.h"

int main(){

    string msj="hola_como_estan___";
    string msj1="hotomalona___e_cs_";


    Person A(3, 6);
    Person B(3,6);

    cout<<msj<<"\n";
    cout << A.cipher(msj) <<"\n";
    cout << B.decipher(msj1) <<"\n";

}

