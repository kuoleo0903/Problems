#include <bits/stdc++.h>
using namespace std;

int main() {
    char type;
    int n;
    cout << "Input type of vehicle: car (c) bus (b) truck (t): ";
    cin >> type;
    cout << "Input the number of hours: ";
    cin >> n;

    int rate;
    switch (type) {
        case 'c':
            rate = 2;
            break;
        case 'b':
            rate = 3;
            break;
        case 't':
            rate = 4;
            break;
        default:
            cout << "Invalid vehicle type!\n";
            return 1;
    }
    cout << "You owe us: $" << rate * n << "\n";
    cout << "Thank you for parking with us\n";
    return 0;
}