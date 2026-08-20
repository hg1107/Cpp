#include <iostream>
using namespace std;

int main() {
    int a = 10; 
    float b = 20.2;
    // int -> float (implicit)
    float c = a; 
    cout << "Implicit : " << c << endl;

    // Explicit cast
    int d = (int)b;
    cout << "Explicit : " << d << endl;
    return 0;
}
