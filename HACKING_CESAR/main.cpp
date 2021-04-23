#include <iostream>
#include "Hacking_Cesar.h"

using namespace std;


//ALFABETO

const string alphabet = "abcdefghijklmnopqrstuvwxyz";


int main() {
    string msj;
    cout<<"Input your message: "; getline(cin,msj);
    Hacking_Cesar program(alphabet);
    program.brute_force(msj);

}
