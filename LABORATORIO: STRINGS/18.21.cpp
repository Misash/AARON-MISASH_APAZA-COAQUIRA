
#include <iostream>
#include <string>
#include <cstring>//strtok
#include <string.h>
using namespace std;


int main(){
    string txt;
    cout<<"Ingrese su texto: ";
    getline(cin,txt);

    //replace
    for (int i = 0; i < txt.size(); i++){
        if (ispunct(txt[i])){
            txt.replace(i,1," ");
        }
    }

    //string to char
    char str[txt.size()];
    strcpy(str,txt.c_str());


    //tokens
    char * pch;
    pch = strtok(str," ");
    while (pch != NULL)
    {
        cout<<"\n"<<pch;
        pch = strtok(NULL, " ");
    }

    cout<<txt;
    return 0;
}