#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n, k;
    cout << "Enter a positive integer for n (1 to 20): ";
    cin >> n;
    cout << "Enter a positive integer for k (k<=n); ";
    cin >> k;

    long long p = factorial(n) / factorial(n - k);
    cout << "Permutation of n object k at a time: " << p << endl;

    return 0;
}