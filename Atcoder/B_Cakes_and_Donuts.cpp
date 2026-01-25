#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, cnt = 0;
    cin >> n;
    while (n % 4){
        n++;
        cnt++;
    }
    if (n / 8 < cnt) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}