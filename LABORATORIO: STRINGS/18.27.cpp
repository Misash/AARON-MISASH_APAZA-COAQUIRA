

#include <iostream>
#include <string>

using namespace std;

string seleccion_sort(string word){
    int n=word.size();
    string aux(word);
    for(int i=0;i<n;++i){
        int min=i;
        for(int j=i+1;j<n;++j){
            if(aux[j] < aux[min])
                min=j;
        }
        int temp=aux[i];
        aux[i]=aux[min];
        aux[min]=temp;
    }
    word.swap(aux);
    return word;
}


int main(){
    string msj;
    cout<<"Ingrese su texto: ";
    getline(cin,msj);

    cout<<seleccion_sort(msj);

}