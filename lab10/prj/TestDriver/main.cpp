#include <iostream>
#include"ModulesTsarenko.h"

using namespace std;

int main()
{
    count_symb("input.txt", "output_10_1.txt");
    transliteration("input.txt");
    calc(2, 3, 4, 5, "output_10_2.txt");
}
