#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a positive number: ";
    int n;
    cin >> n;
    
    cout << "The reversed number is: ";
    while (n>0){
        cout << n%10;
        n /= 10;
    }

    return 0;
}