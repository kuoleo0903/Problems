#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int reverseNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isEmirp(int n) {
    return isPrime(n) && isPrime(reverseNum(n));
}

void printEmirp() {
    cout << "The emirp numbers less than 1000:" << endl;
    int count = 0;
    for (int i = 2; i < 1000; i++) {
        if (isEmirp(i)) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }
    if (count % 10 != 0) {
        cout << endl;
    }
}

int main() {
    printEmirp();
    return 0;
}