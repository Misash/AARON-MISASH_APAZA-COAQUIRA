
#ifndef ALGORITMOS_PRACTICA_H
#define ALGORITMOS_PRACTICA_H



#include <string>
#include <algorithm> //swap
#include <vector>

using namespace std;

class Person{
private:
    int row,column;
    bool cheker(string);

public:
    Person(int,int);
    ~Person();
    string cipher(string);
    string decipher(string);

};



#endif //ALGORITMOS_PRACTICA_H
