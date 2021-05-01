#include <iostream>
#include <iomanip>
#define N 10
using namespace std;

template <typename T> void massivprint(T *mass, int b);
template <typename T> void sort(T *mass, unsigned len);

int main()
{
    int massiv[N] = { 74, 56, 81, 19, 63, 9, 237, 34, 7, 47 };
    massivprint(massiv, N);
    sort(massiv, N);
    massivprint(massiv, N);
    cout << endl;
    double massiv1[N] = { 56.3554, 78.345354, 2.82222, 19.3425, 65.0, 9.34522, 456.89422, 56.78922, 8.4};
    massivprint(massiv1, N);
    sort(massiv1, N);
    massivprint(massiv1, N);
    cout << endl;
    float massiv2[N] = {344.0967, 65.76, 66.345, 8.645, 7.6, 344.658, 45.876, 1.2345, 78.353, 98.04};
    massivprint(massiv2, N);
    sort(massiv2, N);
    massivprint(massiv2, N);
    cout << endl;
    char massiv3[N] = {'w','z', 'u', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    massivprint(massiv3, N);
    sort(massiv3, N);
    massivprint(massiv3, N);
    cout << endl;
    return 0;
}

template <typename T> void massivprint(T *mass, int b)
{
    for (int i = 0; i < b; i++) {
        cout << "  " << mass[i];
    }
    cout << endl;
}
template <typename T> void sort(T*mass, unsigned len)
{
    for(int i = 0; i < len - 1; i++) {
        for(int j=0; j<len-1; j++) {
            if (mass[j] > mass[j + 1]) {
                int  temp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = temp;
            }
        }
    }
}
