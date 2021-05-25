#include <iostream>
using namespace std;
unsigned increment(unsigned n)
{
    unsigned bit = 1;
    while (n & bit) {
        n ^= bit;
        bit <<= 1;
    }
    n |= bit;
    return n;
}
int food(unsigned g)
{
    unsigned bit = 1;
    int result = 0;
    while (bit) {
        if (g & bit)
            result = increment(result);
        bit <<= 1;
    }
    return result;
}
int main()
{
    long long unsigned int hex = 0xFFFFFFFFFFFFFFFF;
    bool prime;
    long long unsigned int i, a;
    for(i = 2; i < hex; i++) {
        prime = true;
        for(a = 2; a < i; a++)
            if(!(i % a)) {
                prime = false;
                break;
            };
        if(prime == true) {
            if(food(a) == 2) {
                cout <<"10сс: "<< a << endl<< "16сс: " << hex << a << endl;
            }
        }
    }
    return 0;
}
