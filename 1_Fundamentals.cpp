#include <iostream>
using namespace std;

// Comments
/*
Multi line comments
*/


int main(){
    cout << "Hello World" << endl;

    // DataType VariableName = Value
    int x = 5;
    int y = 10;
    cout << "Sum: " << x + y << endl;

    // Constant Value [Cannot be updated later]
    const float pi = 3.14;
    // pi = 1; Will give error


    /*Data Types:

    Basic       Derived         User Defined
    Int         Array           Class
    Float       Pointer         Structure
    Double      Reference       Union
    Char        Function        Typedef
    Bool                        Using
    Void

    Number --> int, float, double, long [Difference is size]
    Character --> char
    Boolean --> bool
    Empty --> void

    */

    int i = 5;
    float f = 3.14;
    double d = 334.566;
    long l = 7467;

    char c = 'A';
    bool b = true;

    cout << "Integer = " << i << " Size = " << sizeof(i)<< endl;
    cout << "Float = " << f << " Size = " << sizeof(f)<< endl;
    cout << "Double = " << d << " Size = " << sizeof(d)<< endl;
    cout << "Long = " << l << " Size = " << sizeof(l)<< endl;
    cout << "Char = " << c << " Size = " << sizeof(c)<< endl;
    cout << "Bool = " << b << " Size = " << sizeof(b)<< endl;
    
    // Garbage Value:
    double z;   // Value declared without initialization, Different Everytime.
    cout << "Garbage: " << z << endl;

    return 0;
}