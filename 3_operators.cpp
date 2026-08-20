#include <iostream>
using namespace std;

int main(){
    // Arithmatic Operators
    int a = 10;
    int b = 20;
    cout << endl << "Arithmatic Operators : " << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a ++ = " << a++ << endl;   // Post --> Pehle use baad me changes
    cout << "a -- = " << a-- << endl;   // Post --> Pehle use baad me changes
    cout << "++a = " << ++a << endl;   // Pre --> Pehle change baad me use
    cout << "--a = " << --a << endl;   // Pre --> Pehle change baad me use

    // Relational Operators
    cout << endl << "Relational Operators : " << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;

    // Logical Operators
    cout << endl << "Logical Operators : " << endl;
    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "!a = " << (!a) << endl;

    // Assignment Operators
    cout << endl << "Assignment Operators : " << endl;
    a += b;
    cout << "a += b = " << a << endl;
    a -= b;
    cout << "a -= b = " << a << endl;
    a *= b;
    cout << "a *= b = " << a << endl;
    a /= b;
    cout << "a /= b = " << a << endl;
    a %= b;
    cout << "a %= b = " << a << endl;

    // Bitwise Operators
    cout << endl << "Bitwise Operators : " << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << b = " << (a << b) << endl;
    cout << "a >> b = " << (a >> b) << endl;

    // Ternary Operator
    cout << endl << "Ternary Operator : " << endl;
    cout << "a > b ? a : b = " << (a > b ? a : b) << endl;

    // sizeof Operator
    cout << endl << "sizeof Operator : " << endl;
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(b) = " << sizeof(b) << endl;

    return 0;
}