#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, p, cnt = 0;
    cin >> n >> p;
    for (int i=0; i<n; i++){
        int a;
        cin >> a;
        if (a < p) cnt++;
    }
    cout << cnt << endl;

    return 0;
}