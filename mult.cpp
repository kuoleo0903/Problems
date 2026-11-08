#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, t;
    cin >> n;
    while (cin >> m){
        while (cin >> t){
            if (t%m == 0){
                cout << t << endl;
                break;
            }
        }
    }
    
    return 0;
}