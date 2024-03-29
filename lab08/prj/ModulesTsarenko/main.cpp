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
