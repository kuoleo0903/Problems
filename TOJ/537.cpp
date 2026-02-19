#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int p, q, r;
    cin >> p >> q >> r;

    if (p+q > r and p+r > q and q+r > p) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}