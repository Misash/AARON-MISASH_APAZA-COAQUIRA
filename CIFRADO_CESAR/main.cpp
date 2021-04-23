

#include "Cesar.h"
#include <iostream>
using namespace  std;



int main() {

    string msj;
    int key;
    cout<<"Input your message: "; getline(cin,msj);
    cout<<"Input your key: "; cin>>key;

    Cesar emisor(key),receptor(key);

    cout<<"Encrypted message: "<<emisor.cipher(msj)<<"\n";
    cout<<"decrypted message: "<<receptor.decipher(emisor.cipher(msj))<<"\n";


    return 0;
}

