
#include <iostream>
#include <string>
#include <vector>


using namespace std;






void problema1_A_B_C_D_E_F(string txt,int columnas){
    //pregunta e
    string string1;
    //pregunta f
    vector<string> vect;
    std::vector<int>

    int n=txt.size();

    int filas=1+(n/columnas);
    int cont=0;

    for(int i=0;i<filas;++i){
        for(int j=0;j<columnas;j++){
            if(cont>=n) {
                cout<<"X";
                string1.push_back('X');
                vect.push_back('X');
            }
            else {
                cout<<txt[cont];
                string1.push_back(txt[cont]);
                vect.push_back(txt[cont]);
            }
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

