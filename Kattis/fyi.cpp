#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    string s;
    bool judge = 0;
    cin >> s;
    for (int i=0; i<3; i++){
        if (s[i] != '5'){
            judge = 1;
            break;
        }
    }

    if (judge) cout << 0 << endl;
    else cout << 1 << endl;

    return 0;
}