#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Rational {

public:

    int numerator = 0;
    int denominator = 1;

    Rational(){}
    Rational(int _numerator) {
        numerator = _numerator;
    }
    Rational(int _numerator, int _denominator) {
        numerator = _numerator;
        denominator = _denominator;

        for (int i = 1; i <= _numerator; i++) {
            if ((_numerator % i == 0) && (_denominator % i == 0)) {
                numerator = _numerator / i;
                denominator = _denominator / i;
            }
        }
    }

    Rational Add(Rational _r) {
        Rational result;

        result.denominator = denominator * _r.denominator;
        result.numerator = numerator * _r.denominator + _r.numerator * denominator;

        return result;
    }
    bool Equal(Rational _r) {
        if ((numerator == _r.numerator) && (denominator == _r.denominator)) {
            return true;
        }
        else
            return false;
    }

};

void Print(Rational _r) {
    cout << _r.numerator << "/" << _r.denominator << '\n';
}
void Print(vector<Rational> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].numerator << "/" << vec[i].denominator << ", ";
    }
    cout << '\n';
}

Rational Mul(Rational _r1, Rational _r2) {
    Rational result;
    result.numerator = _r1.numerator * _r2.numerator;
    result.denominator = _r1.denominator * _r2.denominator;

    return result;
}

string NewString(string _s) {
    string result;
    result = "***" + _s + "***";

    return result;
}

int main() {
    Rational r1, r2(5), r3(2, 8), r4;
    Print(r1); // prints 0/1
    Print(r2); // prints 5/1
    Print(r3); // prints 1/4

    r4 = Mul(r2, r3); // r4 = r2*r3
    Print(r4); // prints 5/4
    r4 = r2.Add(r3); // r4 = r2+r3
    Print(r4); // prints 21/4

    if (r4.Equal(Rational{ 42, 8 })) std::cout << "Equal" << std::endl;

    std::vector<Rational> v1;
    v1.push_back({ 1 }); v1.push_back({ 3, 7 });
    Print(v1); // prints 1/1, 3/7

    std::string s1 = "C++ programming", s2;
    s2 = NewString(s1); // s2: "***C++ programming***"
    std::cout << s2 << std::endl; // prints ***C++ programming***
}
