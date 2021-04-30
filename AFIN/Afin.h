
#ifndef AFIN_AFIN_H
#define AFIN_AFIN_H

#include <string>
using namespace std;

class Afin{
    private:
        int a,b;
        void keyGenerator();
        int aleatory();
    public:
        string alphabet="abcdefghijklmnopqrstuvwxyz";
        Afin();
        Afin(int,int);
        ~Afin();
        string cipher(string);
        string decipher(string);
};


#endif //AFIN_AFIN_H
