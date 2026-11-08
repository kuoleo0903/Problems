#include <bits/stdc++.h>
using namespace std;

bool isDivisible(int num, int divisor) {
    return num % divisor == 0;
}

int main() {
    int n;
    cout << "Enter a number between 1 and 100: ";
    cin >> n;

    cout << "The number: " << n << endl;
    cout << "The factors: ";
    for (int i = 1; i <= n; i++) {
        if (isDivisible(n, i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}