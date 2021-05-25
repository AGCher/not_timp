#include <iostream>
#include <algorithm>
#include <random>
#include <stdio.h>
#include <vector>
using namespace std;
bool simple(uint32_t n)
{
    if(n < 2)
        return false;
    else if(n < 4)
        return true;
    else if((n & 1) == 0)
        return false;
    for(uint64_t i = 3; i <= (uint64_t)sqrt(n); i = i +
            2)
        if(n % i == 0)
            return false;
    return true;
}
void randomSimple(int s)
{
    vector<uint32_t> simples;
    simples.reserve(s);
    random_device rd;
    mt19937_64 mersenne(time(0));
    uint32_t number;
    for(int n=0; n<s; n++) {
        do {
            number = mersenne();
            simples.push_back(number);
            cout <<"Полученное число: " << number << endl;
        } while (simple(number));
    }
    sort(simples.begin(), simples.end(),
         greater<uint32_t>());
    cout << "\nМинимальное число: " << simples[simples.size() - 1] << endl;
    cout << "\nМаксимальное число: " <<simples[0] << endl;
}
int main()
{
    int i;
    cout <<"Введите количество чисел: ";
    cin >>i;
    randomSimple(i);
    return 0;
}
