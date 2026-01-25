#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, x, tmp, min = 100005;
    cin >> n >> x;

    for (int i=0; i<n; i++){
        cin >> tmp;
        x -= tmp;
        if (tmp < min) min = tmp;
    }
    cout << x / min + n << endl;

    return 0;
}