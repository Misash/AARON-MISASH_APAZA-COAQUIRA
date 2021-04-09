//
// Created by misash on 9/04/21.
//

#include "Rail_Fance.h"
#include <iostream>

int main(){
    string msj;
    int key;
    cout<<"Input your message: ";
    getline(cin,msj);
    cout<<"Input your key: ";
    cin>>key;

    Rail_Fance emisor(key),receptor(key);

    cout<<"Encrypted message: "<<emisor.cipher(msj)<<"\n";
    cout<<"decrypted message: "<<receptor.decipher(emisor.cipher(msj))<<"\n";

}