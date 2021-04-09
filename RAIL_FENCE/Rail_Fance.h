//
// Created by misash on 6/04/21.
//

#ifndef TRANSPOSCION_RAIL_FANCE_H
#define TRANSPOSCION_RAIL_FANCE_H

#include <string>
using namespace std;

class Rail_Fance{
private:
    int key;
public:
    Rail_Fance(int);
    ~Rail_Fance();
    string cipher(string);
    string decipher(string);
};

#endif //TRANSPOSCION_RAIL_FANCE_H
