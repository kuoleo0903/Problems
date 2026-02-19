#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    string a, b;
    int n = 1;
    cin >> a >> b;
    for(int i=0; i<4; i++){
        if (a[i] != b[i]) n *= 2;
    }
    cout << n << endl;
    return 0;
}