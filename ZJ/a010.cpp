#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i=2; i<= n; i++){
        if (n%i == 0){
            n /= i;
            int power = 1;
            while(n%i == 0){
                n /= i;
                power++;
            }
            if (power!= 1) cout << i << "^" << power;
            else cout << i;
            if (n != 1) cout << "*";
        }
    }

    return 0;
}