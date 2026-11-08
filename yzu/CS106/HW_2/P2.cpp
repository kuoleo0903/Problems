#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the temperature in Celsius: ";

    double celsius;
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << celsius << " Celsius" << endl;
    cout << fahrenheit << " Fahrenheit" << endl;

    return 0;
}