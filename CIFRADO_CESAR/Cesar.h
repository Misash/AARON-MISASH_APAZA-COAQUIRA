
#ifndef CIFRADO_CESAR_CESAR_H
#define CIFRADO_CESAR_CESAR_H


#include <string>

//Asignar  nombres alternativos
typedef long long int int64;
typedef unsigned long long int unsigned_int64;

int64 mod(int64,int64 );

class Cesar{
private:
    int64 key;
public:
    Cesar(int64);
    ~Cesar();
    std::string cipher(std::string);
    std::string decipher(std::string);
};


#endif //CIFRADO_CESAR_CESAR_H
