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
        cout << "������ ������� ('k', 'h', 'g', 'f', 'd' ��� 'D'): ";
        cin >> input;

        switch (input) {
            case 'k':
                cout << "������ x, y, z: ";
                cin >> x >> y >> z;
                cout << "���������: ";
                s_calculation(x, y, z);
                break;
            case 'h':
                cout << "������ ���� ��������: ";
                cin >> deposit;
                cout << "������ ����� 䳿 ����� (������� ������): ";
                cin >> months;
                cout << "���������: ";
                bank(deposit, months);
                break;
            case 'g': {
                cout << "������ ������� ���� �������� ����: ";
                double speed[length];
                for (int i = 0; i < length; i++) {
                    cin >> speed[i];
                }
                beaufort(speed, length);
                break;
            }
            case 'f':
                unsigned int num;
                cout << "������ �������� �� 0 �� 9008000: ";
                cin >> num;
                cout << "���������: " << bits(num) << endl;
                break;
            case 'd':
            case 'D':
                cout << "�����" << endl;
                return 0;
            default:
                cout << "�������, ��������� �� ���" << endl;
                cout << '\a';
        }
    }
    getch();
    return 0;
}
