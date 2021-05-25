#include <iostream>
#include <random>
#include <stdio.h>
using namespace std;
bool simple(uint64_t n)
{
    if(n < 2)
        return false;
    else if(n < 4)
        return true;
    else if((n & 1) == 0)
        return false;
    for(uint64_t i = 3; i <= (uint64_t)sqrt(n); i = i + 2)
        if(n % i == 0)
            return false;
    return true;
}
uint64_t randomSimple(int s)
{
    random_device rd;
    mt19937_64 mersenne(time(0));
    uint64_t number;
    for(int n=0; n<s; n++) {
        do {
            number = mersenne();
            cout <<"Полученное число: " << number << endl;
        } while (simple(number));
    }
    return number;
}
int main()
{
    int i;
    cout <<"Введите количество чисел: ";
    cin >>i;
    randomSimple(i);
    return 0;
}
