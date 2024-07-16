#include <cmath>
#include <iostream>

using std::cout;
using std::cin;

int main() {
    cout << "Please enter a floating-point value: ";
    double n = 0;
    cin >> n;

    cout << "n == " << n << '\n';
    cout << "n + 1 == " << n+1 << '\n';
    cout << "three times n == " << n*3 << '\n';
    cout << "twice n == " << n*2 << '\n';
    cout << "n squared == " << n*n << '\n';
    cout << "half of n == " << n/2 << '\n';
    cout << "half of n == " << n/2 << '\n';
    cout << "square root of n == " << std::sqrt(n) << '\n';


    return 0;
}
