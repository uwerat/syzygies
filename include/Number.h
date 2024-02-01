#ifndef NUMBER_H
#define NUMBER_H

#include <vector>


class Field
{
    public:
        int p, f, q;
        int inverse(int);
        int neg(int);
        int product(int,int);
        int sum(int,int);
        Field(int,int);
    private:
        std::vector<int> poly;  //  F is the splitting field of poly
        std::vector<int> gen;   //  gen is a generator of the multiplicative group of F
        void create();
        void generator();
        void tables();
        std::vector<int> exp;   //
        std::vector<int> log;   //
        std::vector<int> negative;
        std::vector<int> rebase;   //
        std::vector<int> unbase;   //
        std::vector<int> mult(std::vector<int>, std::vector<int>);
        int sum0(int,int);
        int sum2(int,int);
        int sump(int,int);
        int p_inverse(int);
        int gcd(std::vector<int>);
        std::vector<int> power(std::vector<int>, int);
};


typedef int (Field::*Fsum)(int x, int y);


#endif // NUMBER_H
