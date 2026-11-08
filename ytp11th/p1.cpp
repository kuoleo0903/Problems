#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q;
    cin >> n >> q;

    vector<long long> r;
    vector<int> s;
    for (int i=0; i<n; i++){
        long long a;
        int b;
        cin >> a >> b;
        r.push_back(a*a);
        s.push_back(b);
    }

    for (int i = 0; i < q; i++){
        long long x, y;
        cin >> x >> y;
        long long x2 = x*x, y2 = y*y;
        
        bool hit = 0;
        
        for (int j = 0; j < n; j++){
            if (x2 + y2 <= r[j]){
                cout << s[j] << endl;
                hit = 1;
                break;
            }
        }
        if (!hit) {
            cout << 0 << endl;
        }
    }
    
    return 0;
}