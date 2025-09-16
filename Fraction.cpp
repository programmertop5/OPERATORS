#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
    numerator = 1;
    denominator = 5;
}

Fraction::Fraction(const Fraction& fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
}

Fraction::Fraction(int numerator, int denominator) {
    if (denominator == 0) {
        cout << "Don't divide by zero!" << endl;
        this->numerator = 0;
        this->denominator = 1;
    }
    else {
        this->numerator = numerator;
        this->denominator = denominator;
        reduce();
    }
}

void Fraction::Print() const {
    cout << numerator << "/" << denominator;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setNumerator(int num) {
    numerator = num;
    reduce();
}

void Fraction::setDenominator(int denom) {
    if (denom != 0) {
        denominator = denom;
        reduce();
    }
    else {
        cout << "Denominator can't be zero!" << endl;
    }
}

Fraction Fraction::addInteger(int number) const {
    int newNumerator = numerator + number * denominator;
    return Fraction(newNumerator, denominator);
}

Fraction Fraction::subtractInteger(int number) const {
    int newNumerator = numerator - number * denominator;
    return Fraction(newNumerator, denominator);
}

Fraction Fraction::addFraction(const Fraction& other) const {
    int commonDenominator = denominator * other.denominator;
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    return Fraction(newNumerator, commonDenominator);
}

Fraction Fraction::subtractFraction(const Fraction& other) const {
    int commonDenominator = denominator * other.denominator;
    int newNumerator = numerator * other.denominator - other.numerator * denominator;
    return Fraction(newNumerator, commonDenominator);
}

Fraction Fraction::multiplyByInteger(int number) const {
    int newNumerator = numerator * number;
    return Fraction(newNumerator, denominator);
}

Fraction Fraction::multiplyByFraction(const Fraction& other) const {
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::divideByFraction(const Fraction& other) const {
    if (other.numerator == 0) {
        cout << "Cannot divide by a fraction with numerator 0!" << endl;
        return Fraction(0, 1);
    }
    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::divideByInteger(int number) const {
    if (number == 0) {
        cout << "Cannot divide by zero!" << endl;
        return Fraction(0, 1);
    }
    int newDenominator = denominator * number;
    return Fraction(numerator, newDenominator);
}

void Fraction::reduce()
{
    int a = numerator;
    int b = denominator;


    if (a < 0) {
        a = 0 - a;
    }
    if (b < 0) {
        b = 0 - b;
    }

    int min;
    if (a < b) {
        min = a;
    }
    else {
        min = b;
    }

    for (int i = min; i > 1; i = i - 1) {
        if (numerator % i == 0 && denominator % i == 0) {
            numerator = numerator / i;
            denominator = denominator / i;
            break;
        }
    }


    if (denominator < 0) {
        numerator = 0 - numerator;
        denominator = 0 - denominator;
    }


    if (numerator == 0) {
        denominator = 1;
    }
}

Fraction Fraction::operator+(const Fraction& other) const
{
    return addFraction(other);
}

Fraction Fraction::operator+(int number) const
{
    return addInteger(number);
}

Fraction Fraction::operator-(const Fraction& other) const
{
    return subtractFraction(other);
}

Fraction Fraction::operator-(int number) const
{
    return subtractInteger(number);
}

Fraction Fraction::operator*(const Fraction& other) const
{
    return multiplyByFraction(other);
}

Fraction Fraction::operator*(int number) const
{
    return multiplyByInteger(number);
}

Fraction Fraction::operator/(const Fraction& other) const
{
    return divideByFraction(other);
}

Fraction Fraction::operator/(int number) const
{
    return divideByInteger(number);
}








