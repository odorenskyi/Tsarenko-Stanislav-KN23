#include <iostream>
#include"ModulesTsarenko.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    bank(12500, 11);
    double speed[] = {17.6, 31.2, 8.4, 24.9, 1.7, 29.5, 12.0, 3.8, 22.1, 14.6, 27.3, 6.2, 19.9, 30.7, 11.5, 25.4, 2.9, 20.6, 13.1, 7.3, 28.8, 4.5, 16.2, 9.0, 23.7, 0.4, 18.9, 26.6, 10.3, 5.1, 21.8};
    int length = sizeof(speed) / sizeof(speed[0]);
    beaufort(speed, length);
    cout << bits(0);
}
