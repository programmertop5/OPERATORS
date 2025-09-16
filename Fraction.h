#pragma once

class Fraction {
private:
    int numerator;
    int denominator;

public:

    Fraction();
    Fraction(const Fraction& fraction);
    Fraction(int numerator, int denominator);
    
    void Print() const;

    int getNumerator() const;
    int getDenominator() const;


    void setNumerator(int num);
    void setDenominator(int denom);


    
    Fraction addInteger(int number) const;
    Fraction subtractInteger(int number) const;
    Fraction addFraction(const Fraction& other) const;
    Fraction subtractFraction(const Fraction& other) const;
    Fraction multiplyByInteger(int number) const;
    Fraction multiplyByFraction(const Fraction& other) const;
    Fraction divideByFraction(const Fraction& other) const;
    Fraction divideByInteger(int number) const;
    void reduce();


    Fraction operator+(const Fraction& other)const;
    Fraction operator+(int number)const;

    Fraction operator-(const Fraction& other)const;
    Fraction operator-(int number)const;

    Fraction operator*(const Fraction& other)const;
    Fraction operator*(int number)const;

    Fraction operator/(const Fraction& other)const;
    Fraction operator/(int number)const;

};
