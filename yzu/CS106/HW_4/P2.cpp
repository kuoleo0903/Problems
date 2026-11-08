#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the first number (positive): ";
    cin >> m;
    cout << "Enter the second number (positive): ";
    cin >> n;


    int m1 = m, n1 = n;
    while(n1>0){
        m1 %= n1;
        if (m1 < n1) swap(m1, n1);
    }

    cout << "The greatest common divisor (GCD) between " << n << " and " << m << " is: " << m1;
    return 0;
}