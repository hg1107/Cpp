#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two number seperated by a space: ";  // When the input sees a space or new line, it stops taking input for that variable.
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;

    string name;
    int age;

    cout << "Enter your full name:";
    getline(cin, name);     // used to take space input as well
    // cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello " << name << ", you are " << age << " years old" << endl;

    

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your full name:";
    cin.ignore();   // this will ignore the new line character left by the previous input
    getline(cin, name);     
    cout << "Hello " << name << ", you are " << age << " years old" << endl;

    return 0;
}