
#include <iostream>
#include<string>
using namespace std;


int modulo(int a,int b){
    //a mod b = residuo

    int residuo= a-b*(int)(a/b);

    return (residuo>=0)? residuo:-1;
}


int main(){


    cout<<modulo(17,89);

}
