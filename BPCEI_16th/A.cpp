// Problem: A. 如果我不能 AC 那所有人都不要 AC 了
// Contest: Codeforces - BPCEI 結訓考（測機）
// URL: https://codeforces.com/gym/678512/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b;
        cin >> a >> b;
        if(a == b) cout << "AC" << endl;
        else cout << "WA" << endl;
    }
    return 0;
}