

#include <iostream>
#include <string>

using namespace std;

void rever_print(string text){
        for(int i=text.size()-1;i>=0;i--)
            cout<<text.at(i);
}


int main(){
    string msj;
    cout<<"Ingrese su texto: ";
    getline(cin,msj);

    rever_print(msj);

}