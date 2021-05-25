#include <iostream>
using namespace std;
unsigned increment(unsigned v)
{
    unsigned bit = 1;
    while (n & bit) {
        n ^= bit;
        bit <<= 1;
    }
    n |= bit;
    return n;
}
int food(unsigned l)
{
    unsigned bit = 1;
    int result = 0;
    int g;
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
    for(i = 2147483649; i < hex; i++) {
        prime = true;
        for(a = 2; a < i; a++)
            if(!(i % a)) {
                prime = false;
                break;
            };
        if(prime == true) {
            if(food(a) == 3) {
                cout <<"10сс: "<< a <<endl << "16сс: " << hex << a <<endl<<endl;
            }
        }
    }
    return 0;
}
