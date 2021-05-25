#include <iostream>
#include <random>
#include <stdio.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
bool simple(uint64_t n)
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
uint64_t randomSimple(int s)
{
    random_device rd;
    mt19937_64 mersenne(time(0));
    uint64_t number;
    for(int n=0; n<s; n++) {
        auto start = high_resolution_clock::now();
        do {
            number = mersenne();
            cout <<"Полученное число: " << number << endl;
        } while (simple(number));
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop -
                        start);
        cout << "Затрачено времени: " << duration.count() << "мсек" << endl;
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
