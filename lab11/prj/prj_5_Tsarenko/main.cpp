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
        cout << "1. Вивести РСОД" << endl;
        cout << "2. Додати реєстр" << endl;
        cout << "3. Шукати реєстр за кодом ЄДЕБО: " << endl;
        cout << "4. Видалити реєстр" << endl;
        cout << "5. Вихід" << endl;
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
            cout << "Введіть код закладу в ЄДЕБО: ";
            cin >> code;
            searchInstitutionByCode(code);
            break;
        }
        case 4: {
            int code;
            cout << "Введіть код закладу в ЄДЕБО: ";
            cin >> code;
            removeInstitution(code);
            break;
        }
        case 5:
            saveRegistry("registry.txt");
            return 0;
        default:
            cout << "Помилка, спробуйте ще раз" << endl;
        }
    }
    return 0;
}
