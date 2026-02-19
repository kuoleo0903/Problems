#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < a || c > b) cout << "no" << endl;
    else cout << "yes" << endl;

    return 0;
}