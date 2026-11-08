#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a number between 1 & 100: ";
    int n;
    cin >> n;

    cout << "Factors are: " << "\n";
    for(int i=1; i<=n; i++){
        if (n%i == 0) cout << i << " ";
    }
    return 0;
}