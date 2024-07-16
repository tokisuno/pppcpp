#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    cout << "Please enter two names: ";
    string first;
    string second;
    cin >> first >> second;

    string name = first + " " + second;

    cout << "Hello, " << name << '\n';

    return 0;
}
