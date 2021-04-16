

#include <iostream>
#include <string>

using namespace std;

int main(){
    string cadena;
    cout<<"Ingrese una cadena: ";
    getline(cin,cadena);

    //insertar "******"
    int mitad_Cad=cadena.size()/2;
    cadena.insert(mitad_Cad,"******");

    cout<<"\nCadena modificada: "<<cadena;

}