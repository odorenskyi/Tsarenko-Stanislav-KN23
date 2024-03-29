#include <iostream>
#include <iomanip>
#include "ModulesTsarenko.h"

using namespace std;

void printCopyright()
{
    system("chcp 1251 & cls");
    cout << "--------------------------------------------------------------\n\
| ¬иконав: Tsarenko Stas  https://github.com/StasTsarenko    |\n\
-------------- © All rights reserved -------------------------\n"<<endl;
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
    cout << "¬вед≥ть а: ";
    cin >> a;
    cout << "¬вед≥ть b: ";
    cin >> b;
    cout << "¬вед≥ть x: ";
    cin >> x;
    cout << "¬вед≥ть y: ";
    cin >> y;
    cout << "¬вед≥ть z: ";
    cin >> z;


    cout << "Ћог≥чний вираз: " <<checkBool(a,b);
    cout << "x в дес€тков≥й " << x << "\nx в ш≥стнадц€тков≥й " << getHex(x) << endl;
    cout << endl;
    cout << "y в дес€тков≥й " << y << "\ny в ш≥стнадц€тков≥й " << getHex(y) << endl;
    cout << endl;
    cout << "z в дес€тков≥й " << z << "\nz в ш≥стнадц€тков≥й " << getHex(z) << endl;
    cout << endl;

    s_calculation(x, y, z);
    return 0;
}
