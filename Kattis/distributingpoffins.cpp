#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    if (m%n) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}