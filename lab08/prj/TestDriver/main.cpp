#include <iostream>
#include "ModulesTsarenko.h"

using namespace std;

int main()
{
    cout << "TC_01: ";
    s_calculation(2, 5, 8);
    cout << "TC_02: ";
    s_calculation(1, 1, 1);
    cout << "TC_03: ";
    s_calculation(1, 2, 3);
    cout << "TC_04: ";
    s_calculation(1, 3, 1);
    cout << "TC_05: ";
    s_calculation(9, 1, 1);
    cout << "TC_06: ";
    s_calculation(1, 3, 8);
    cout << "TC_07: ";
    s_calculation(8, 1, 5);
    cout << "TC_08: ";
    s_calculation(3, 7, 7);
    cout << "TC_09: ";
    s_calculation(9, 7, 3);
    cout << "TC_10: ";
    s_calculation(1, 4, 1);
    return 0;
}
