#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>
#include <fstream>
#include <string>
#include <unordered_map>
#include <ctime>

using namespace std;

double s_calculation(int x, int y, int z)
{
    setlocale(LC_ALL,"UA");

    double S = 0;
    S = 1/2*(pow(y, 2)+ 2 * z/(sqrt(M_PI * 7 + x))) - sqrt(pow(M_E,abs(x)) + sqrt(abs(y - z)))/sin(z*y);
    return S;
}


void bank(double depositAmount, int months) {
    double monthlyInterest, totalInterest;
    double annualRate = (months == 6) ? 0.16 : 0.18;

    monthlyInterest = (depositAmount * annualRate) / 12;
    totalInterest = monthlyInterest * months;

    cout << "���� ��������� ������ �������: " << monthlyInterest << " ���." << endl;
    cout << "�������� ���� ������� �� ���� ����� 䳿 ��������: " << totalInterest << " ���." << endl;

}


void beaufort(double* speed, int length) {
    double max = speed[0];

    cout << endl;
    for (int i = 1; i < length; i++) {
        if (max < speed[i])
            max = speed[i];
    }
    cout << "��������: " << max << endl;

    if (max < 0.3)
        cout << "��� ������� 0!" << endl;
    else if (0.3 < max && max < 1.5)
        cout << "��� ������� 1!" << endl;
    else if (1.6 < max && max < 3.4)
        cout << "��� ������� 2!" << endl;
    else if (3.4 < max && max < 5.4)
        cout << "��� ������� 3!" << endl;
    else if (5.5 < max && max < 7.9)
        cout << "��� ������� 4!" << endl;
    else if (8 < max && max < 10.7)
        cout << "��� ������� 5!" << endl;
    else if (10.8 < max && max < 13.8)
        cout << "��� ������� 6!" << endl;
    else if (13.9 < max && max < 17.1)
        cout << "��� ������� 7!" << endl;
    else if (17.2 < max && max < 20.7)
        cout << "��� ������� 8!" << endl;
    else if (20.8 < max && max < 24.4)
        cout << "��� ������� 9!" << endl;
    else if (24.5 < max && max < 28.4)
        cout << "��� ������� 10!" << endl;
    else if (28.5 < max && max < 32.6)
        cout << "��� ������� 11!" << endl;
    else if (max >= 32.7)
        cout << "��� ������� 12!" << endl;
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

void count_symb(const string& infilename, const string& outfilename1) {
    system("chcp 1251 & cls");
    ifstream in(infilename);
    if (!in.is_open()) {
        cerr << "�� ������� ������� ������� ����: " << infilename << endl;
        return;
    }

    ofstream out(outfilename1, ios::app);
    if (!out.is_open()) {
        cerr << "�� ������� ������� �������� ����: " << outfilename1 << endl;
        return;
    }

    string text;
    char ch, check = ':';
    int count = 0;

    while (in.get(ch)) {
        if (ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�' && ch != '�') {
            text += ch;
        }
        if (check == ch) {
            count++;
        }
    }

    out << "------------------------------------------------------\n"
        << "| Tsarenko Stas, CUNTU, Ukraine, Kropyvnytskyi, 2024 |\n"
        << "------------------ � All rights reserved -------------\n"
        << "ʳ������ ������� ( : ) = " << count << "\n����� ��� �������� = " << text << endl;
}

void transliteration(const string& inputFileName) {
    system("chcp 1251 & cls");
    string text;
    char ch;
    time_t now = time(nullptr);
    tm current_time;
    localtime_s(&current_time, &now);

    ifstream in(inputFileName);
    if (in.is_open()) {
        while (in.get(ch))
            text += ch;
    }
    in.close();

    unordered_map<char, string> translit_map = {
        {'�', "A"}, {'�', "a"},
        {'�', "B"}, {'�', "b"},
        {'�', "V"}, {'�', "v"},
        {'�', "H"}, {'�', "h"},
        {'�', "G"}, {'�', "g"},
        {'�', "D"}, {'�', "d"},
        {'�', "E"}, {'�', "e"},
        {'�', "Ye"}, {'�', "ie"},
        {'�', "Zh"}, {'�', "zh"},
        {'�', "Z"}, {'�', "z"},
        {'�', "Y"}, {'�', "y"},
        {'�', "I"}, {'�', "i"},
        {'�', "Yi"}, {'�', "i"},
        {'�', "Y"}, {'�', "i"},
        {'�', "K"}, {'�', "k"},
        {'�', "L"}, {'�', "l"},
        {'�', "M"}, {'�', "m"},
        {'�', "N"}, {'�', "n"},
        {'�', "O"}, {'�', "o"},
        {'�', "P"}, {'�', "p"},
        {'�', "R"}, {'�', "r"},
        {'�', "S"}, {'�', "s"},
        {'�', "T"}, {'�', "t"},
        {'�', "U"}, {'�', "u"},
        {'�', "F"}, {'�', "f"},
        {'�', "Kh"}, {'�', "kh"},
        {'�', "Ts"}, {'�', "ts"},
        {'�', "Ch"}, {'�', "ch"},
        {'�', "Sh"}, {'�', "sh"},
        {'�', "Shch"}, {'�', "shch"},
        {'�', ""}, {'�', ""},
        {'�', "Yu"}, {'�', "iu"},
        {'�', "Ya"}, {'�', "ia"}
    };

    string transliterated_text;
    for (char ch : text) {
        auto it = translit_map.find(ch);
        if (it != translit_map.end()) {
            transliterated_text += it->second;
        }
        else {
            transliterated_text += ch;
        }
    }

    ofstream out(inputFileName, ios::app);
    if (out.is_open()) {
        out << "\n����� ���� �������������: " << transliterated_text << "\n���� ��������: " << current_time.tm_mday << "/" << (current_time.tm_mon + 1) << "/" << (current_time.tm_year + 1900) << endl;
    }
    out.close();
}

void calc(int x, int y, int z, int b, const string& outputFileName) {
    system("chcp 1251 & cls");

    double result;
    result = s_calculation(x, y, z);
    string binary = "";
    while (b > 0) {
        binary = to_string(b % 2) + binary;
        b /= 2;
    }
    ofstream out(outputFileName, ios::app);
    if (out.is_open()) {
        out << "��������� s_calculation: " << result << "\n������������ b � �������� ���: " << binary << endl;
    } else {
        cerr << "�� ������� ������� �������� ����: " << outputFileName << endl;
    }
    out.close();
}
