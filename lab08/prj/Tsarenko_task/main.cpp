#include <iostream>
#include <iomanip>
#include "ModulesTsarenko.h"

using namespace std;

void printCopyright()
{
    system("chcp 1251 & cls");
    cout << "--------------------------------------------------------------\n\
| �������: Tsarenko Stas  https://github.com/StasTsarenko    |\n\
-------------- � All rights reserved -------------------------\n"<<endl;
}

void checkBool(char a, char b) {
    if (a + 5 > b + 2)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

int getHex(int number)
{
    cout << hex;
    return number;
}

int main()
{
    printCopyright();
    int x, y, z;
    char a, b;
    cout << "������ �: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;
    cout << "������ x: ";
    cin >> x;
    cout << "������ y: ";
    cin >> y;
    cout << "������ z: ";
    cin >> z;


    cout << "������� �����: " <<checkBool(a,b);
    cout << "x � ��������� " << x << "\nx � �������������� " << getHex(x) << endl;
    cout << endl;
    cout << "y � ��������� " << y << "\ny � �������������� " << getHex(y) << endl;
    cout << endl;
    cout << "z � ��������� " << z << "\nz � �������������� " << getHex(z) << endl;
    cout << endl;

    s_calculation(x, y, z);
    return 0;
}
