
#ifndef ALGORITMOS_ESCITALA
#define ALGORITMOS_ESCITALA



#include <string>
#include <algorithm> //swap


using namespace std;

class Escitala{
private:
    int row,column;
    bool checker(string);

public:
    Escitala(int,int);
    ~Escitala();
    string cipher(string);
    string decipher(string);

};



#endif //ALGORITMOS_ESCITALA
