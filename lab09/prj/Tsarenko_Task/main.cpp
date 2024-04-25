#include <iostream>
#include <conio.h>
#include "ModulesTsarenko.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    char input;
    double x, y, z, deposit;
    int months, length = 31;

    while (true) {
        cout << "ќбер≥ть функц≥ю ('k', 'h', 'g', 'f', 'd' або 'D'): ";
        cin >> input;

        switch (input) {
            case 'k':
                cout << "¬вед≥ть x, y, z: ";
                cin >> x >> y >> z;
                cout << "–езультат: ";
                s_calculation(x, y, z);
                break;
            case 'h':
                cout << "¬вед≥ть суму депозиту: ";
                cin >> deposit;
                cout << "¬вед≥ть строк д≥њ угоди (к≥льк≥сть м≥с€ц≥в): ";
                cin >> months;
                cout << "–езультат: ";
                bank(deposit, months);
                break;
            case 'g': {
                cout << "¬вед≥ть швидк≥ть в≥тру впродовж с≥чн€: ";
                double speed[length];
                for (int i = 0; i < length; i++) {
                    cin >> speed[i];
                }
                beaufort(speed, length);
                break;
            }
            case 'f':
                unsigned int num;
                cout << "¬вед≥ть значенн€ в≥д 0 до 9008000: ";
                cin >> num;
                cout << "–езультат: " << bits(num) << endl;
                break;
            case 'd':
            case 'D':
                cout << "¬их≥д" << endl;
                return 0;
            default:
                cout << "ѕомилка, спробуйте ще раз" << endl;
                cout << '\a';
        }
    }
    getch();
    return 0;
}
