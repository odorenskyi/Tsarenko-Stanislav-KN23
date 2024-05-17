#include <iostream>
#include "ModulesTsarenko.h"
#include "ModulesSambros.h"
#include "ModulesZamai.h"

using namespace std;

extern vector<EducationalInstitution> registry;


int main() {
    system("chcp 1251 & cls");
    loadRegistry("registry.txt");
    while (true) {
        cout << "1. ������� ����" << endl;
        cout << "2. ������ �����" << endl;
        cout << "3. ������ ����� �� ����� �����: " << endl;
        cout << "4. �������� �����" << endl;
        cout << "5. �����" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            printRegistry();
            break;
        case 2:
            addInstitution();
            break;
        case 3: {
            int code;
            cout << "������ ��� ������� � �����: ";
            cin >> code;
            searchInstitutionByCode(code);
            break;
        }
        case 4: {
            int code;
            cout << "������ ��� ������� � �����: ";
            cin >> code;
            removeInstitution(code);
            break;
        }
        case 5:
            saveRegistry("registry.txt");
            return 0;
        default:
            cout << "�������, ��������� �� ���" << endl;
        }
    }
    return 0;
}
