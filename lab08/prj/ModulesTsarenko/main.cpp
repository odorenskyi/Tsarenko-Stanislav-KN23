#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>

using namespace std;

void s_calculation(int x, int y, int z)
{
    setlocale(LC_ALL,"UA");

    float S = 0;
    S = 1/2*(pow(y, 2)+ 2 * z/(sqrt(M_PI * 7 + x))) - sqrt(pow(M_E,abs(x)) + sqrt(abs(y - z)))/sin(z*y);
    cout << "S: " << S << endl;
}


void bank(double depositAmount, int months) {
    double monthlyInterest, totalInterest;
    double annualRate = (months == 6) ? 0.16 : 0.18;

    monthlyInterest = (depositAmount * annualRate) / 12;
    totalInterest = monthlyInterest * months;

    cout << "Сума щомісячних виплат відсотків: " << monthlyInterest << " грн." << endl;
    cout << "Загальна сума відсотків за весь строк дії договору: " << totalInterest << " грн." << endl;

}


void beaufort(double* speed, int length) {
    double max = speed[0];

    cout << endl;
    for (int i = 1; i < length; i++) {
        if (max < speed[i])
            max = speed[i];
    }
    cout << "Max is: " << max << endl;

    if (max < 0.3)
        cout << "Score of Beaufort is 0!" << endl;
    else if (0.3 < max && max < 1.5)
        cout << "Score of Beaufort is 1!" << endl;
    else if (1.6 < max && max < 3.4)
        cout << "Score of Beaufort is 2!" << endl;
    else if (3.4 < max && max < 5.4)
        cout << "Score of Beaufort is 3!" << endl;
    else if (5.5 < max && max < 7.9)
        cout << "Score of Beaufort is 4!" << endl;
    else if (8 < max && max < 10.7)
        cout << "Score of Beaufort is 5!" << endl;
    else if (10.8 < max && max < 13.8)
        cout << "Score of Beaufort is 6!" << endl;
    else if (13.9 < max && max < 17.1)
        cout << "Score of Beaufort is 7!" << endl;
    else if (17.2 < max && max < 20.7)
        cout << "Score of Beaufort is 8!" << endl;
    else if (20.8 < max && max < 24.4)
        cout << "Score of Beaufort is 9!" << endl;
    else if (24.5 < max && max < 28.4)
        cout << "Score of Beaufort is 10!" << endl;
    else if (28.5 < max && max < 32.6)
        cout << "Score of Beaufort is 11!" << endl;
    else if (max >= 32.7)
        cout << "Score of Beaufort is 12!" << endl;
}

unsigned int bits(unsigned int num) {
    int zeros = 0;
    int ones = 0;
    int mask = 1;

    for (int i = 0; i < 16; ++i) {
        if (num & mask) {
            ones++;
        } else {
            zeros++;
        }
        mask <<= 1;
    }

    return (num & 0x8000) ? ones : zeros;
}
