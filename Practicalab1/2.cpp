//
// Created by misash on 16/04/21.
//

#include <iostream>
#include<string>

using namespace std;


int main()
{
    string str1;
    cout<<"Ingrese un numero: ";
    getline(cin,str1);

    int num = stoi(str1);
    cout << num << '\n';

    return 0;
}