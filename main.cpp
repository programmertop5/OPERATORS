#include <iostream>
#include "Fraction.h"
using namespace std;


Fraction operator+(int number, const Fraction& fraction) {
    return fraction + number;
}
Fraction operator-(int number, const Fraction& fraction) {
    return Fraction(number, 1) - fraction;
}
Fraction operator*(int number, const Fraction& fraction) {
    return fraction * number;
}
Fraction operator/(int number, const Fraction& fraction) {
    return Fraction(number, 1) / fraction;
}

int main() {
    Fraction f1(1, 5);
    Fraction f2(2, 7);

    cout << "Original fractions:" << endl;
    cout << "f1 = "; f1.Print(); cout << endl;
    cout << "f2 = "; f2.Print(); cout << endl << endl;

    cout << "Fraction + Fraction:" << endl;
    Fraction result1 = f1 + f2;
    result1.Print(); cout << endl;

    cout << "Fraction + value:" << endl;
    Fraction result2 = f1 + 2;
    result2.Print(); cout << endl;

    cout << "Fraction - Fraction:" << endl;
    Fraction result3 = f1 - f2;
    result3.Print(); cout << endl;

    cout << "Fraction - value:" << endl;
    Fraction result4 = f1 - 1;
    result4.Print(); cout << endl;

    cout << "Fraction * Fraction:" << endl;
    Fraction result5 = f1 * f2;
    result5.Print(); cout << endl;

    cout << "Fraction * value:" << endl;
    Fraction result6 = f1 * 3;
    result6.Print(); cout << endl;

    cout << "Fraction / Fraction:" << endl;
    Fraction result7 = f1 / f2;
    result7.Print(); cout << endl;

    cout << "Fraction / value:" << endl;
    Fraction result8 = f1 / 2;
    result8.Print(); cout << endl;


    cout << "int + Fraction:" << endl;
    Fraction result9 = 3 + f1;
    result9.Print(); cout << endl;

    cout << "int - Fraction:" << endl;
    Fraction result10 = 5 - f1;
    result10.Print(); cout << endl;

    cout << "int * Fraction:" << endl;
    Fraction result11 = 4 * f1;
    result11.Print(); cout << endl;

    cout << "int / Fraction:" << endl;
    Fraction result12 = 2 / f1;
    result12.Print(); cout << endl;

    return 0;
}
