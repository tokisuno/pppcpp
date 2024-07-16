#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    cout << "Please enter two names: ";
    string first;
    string second;
    cin >> first >> second;

    if (first == second)
        cout << "Same string twice\n";
    if (first < second)
        cout << first << " is alphabetically before " << second << '\n';
    if (first > second)
        cout << second << " is alphabetically before " << first << '\n';

    return 0;
}
