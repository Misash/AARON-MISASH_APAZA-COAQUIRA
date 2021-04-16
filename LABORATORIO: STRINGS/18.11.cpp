
#include <iostream>
#include <string>
using namespace std;


void func(){
    string name,surname;
    cout<<"Input your Name: "; getline(cin,name);
    cout<<"Input your Surname: "; getline(cin,surname);

    //concatenacion
    string fullname(name + " " + surname);

    cout<<"\nYour full name is: "<<fullname;
}


int main(){

    func();

}