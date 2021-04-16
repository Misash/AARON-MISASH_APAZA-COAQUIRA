
#include <iostream>
#include <string>
#include <sstream>


using namespace std;


void problema1(string txt,int columnas){

    int n=txt.size();

    int filas=1+(n/columnas);
    int cont=0;

    for(int i=0;i<filas;++i){
        for(int j=0;j<columnas;j++){
            if(cont>=n) cout<<"X";
            else cout<<txt[cont];
            cont++;

        }
        cout<<endl;
    }


}


int main(){

    string str="intente analizar mas profundamente los mensajes recibidos";
    int key =4;

    problema1(str,key);

}

