#include <iostream>
#include"ModulesTsarenko.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    bank(20000, 5);
    double speed[] = {1.1, 2.3, 0.9, 2.1, 0.8, 3.0, 0.6, 1.6, 0.5, 0.7, 1.8, 0.2, 2.7, 0.3, 2.5, 0.1, 1.7, 2.2, 0.4, 1.3, 1.4, 2.9, 0.0, 1.5, 2.8, 0.2, 2.4, 0.8, 1.9, 2.6, 0.1};
    int length = sizeof(speed) / sizeof(speed[0]);
    beaufort(speed, length);
    cout << bits(1);
}
