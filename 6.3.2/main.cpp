#include <iostream>
#include <iomanip>
#define N 5
using namespace std;

template <typename T> void massivprint(T *mass, int b);
template <typename T> void sort(T *mass, unsigned len);
template <typename T> void swap(T *pa, T *pb);


class  Rectangle
{
    int h, w, s;
public:
    Rectangle() : h(0), w(0), s(0) {};
    Rectangle(int a, int b)
    {
        h = a;
        w = b;
        s = h * w;
    }
    friend ostream& operator<<(ostream& outputStream, const Rectangle a);
    bool operator>(const Rectangle s);
    bool operator<(const Rectangle s);
    bool operator==(const Rectangle s);
    bool operator>=(const Rectangle s);
    bool operator<=(const Rectangle s);
};

ostream& operator<<(ostream& outputStream, const Rectangle a)
{
    return outputStream << a.s;
}

bool Rectangle::operator>(const Rectangle s)
{
    if (this->s > s.s)
        return 1;
    return 0;
}

bool Rectangle::operator<(const Rectangle s)
{
    if (this->s < s.s)
        return 1;
    return 0;
}

bool Rectangle::operator==(const Rectangle s)
{
    if (this->s == s.s)
        return 1;
    return 0;
}

bool Rectangle::operator>=(const Rectangle s)
{
    if (this->s >= s.s)
        return 1;
    return 0;
}

bool Rectangle::operator<=(const Rectangle s)
{
    if (this->s <= s.s)
        return 1;
    return 0;
}

int main()
{
    Rectangle b[N] = { {5,4}, {4, 4}, {7, 8}, {6, 9}, {8, 9}, };
    massivprint(b, N);
    sort(b, N);
    massivprint(b, N);
    return 0;
}

template <typename T> void massivprint(T *mass, int b)
{
    for (int i = 0; i < b; i++) {
        cout << "  " << mass[i];
    }
    cout << endl;
}
template <typename T> void swap(T *pa, T *pb)
{
    T temp = *pa;
    *pa = *pb;
    *pb = temp;
}

template <typename T> void sort(T *mass, unsigned len)

{
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - 1; j++) {
            if (mass[j] > mass[j+1]) {

                swap(mass,mass+1);
            }
        }
    }
}
