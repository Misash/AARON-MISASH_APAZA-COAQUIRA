
#ifndef MATH_H
#define MATH_H


#include <tuple>
using namespace std;

int mod(int a,int n){
    int r= a - n*(a/n);
    if(r<0)
        r=a-n*((a/n)-1);
    return r;
}

int gcd(int D,int d){
    int r = D-(d*(D/d));
    while(r){
        D=d; d=r;
        r = D-(d*(D/d));
    }
    return d;
}

int gcdExtended(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}

int inverse(int a,int n){
    if(gcd(a,n) == 1){
        int x,y;
        gcdExtended(a,n,x,y);
        return mod(x,n);
    }else{
        return -1;
    }
}

#endif //MATH_H
