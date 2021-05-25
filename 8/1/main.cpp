#include <iostream>
#include <ctime>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char buffer[80];
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    char* format = "%A, %d %B %Y, %I:%M:%S";
    strftime(buffer, 80, format, timeinfo);
    cout <<"Текущее время: "<<buffer<<" Иди погладь кота."<<endl;
    return 0;
}
