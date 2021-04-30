#include <iostream>
#include "Afin.h"

using namespace std;

int main() {


    //EMISOR
    /*
    string msj;
    cout<<"Input your message: "; getline(cin,msj);
    Afin emisor;
    msj=emisor.cipher(msj);
    cout<<"Encrypted message: "<<msj<<"\n";
    */


    //RECEPTOR
    string msj;
    int a,b;
    cout<<"Input your message: "; getline(cin,msj);
    cout<<"Input the keys : "; cin>>a>>b;
    Afin receptor(a,b);
    cout<<"decrypted message: "<<receptor.decipher(msj)<<"\n";

}
