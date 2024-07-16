#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    cout << "Enter your first name followed by your age:";
    string name { "" };
    double age  { -1 };

    cin >> name >> age; 

    cout << "Hello, " << name << "(age: " << age * 12 << " months)!\n";

    return 0;
}
