//
// Created by misash on 22/04/21.
//
#ifndef HACKING__CESAR_HACKING_CESAR_H
#define HACKING__CESAR_HACKING_CESAR_H

#include<string>

//Asignar  nombres alternativos
typedef long long int int64;
typedef unsigned long long int unsigned_int64;

int64 mod(int64,int64 );

class Hacking_Cesar{
    public:
    std::string alphabet;
    Hacking_Cesar(std::string);
    ~Hacking_Cesar();
    void brute_force(std::string);
};

#endif //HACKING__CESAR_HACKING_CESAR_H



