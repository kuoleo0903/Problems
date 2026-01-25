#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string s, t;
    cin >> s;
    for (int i=0; i<s.size(); i++){
        if (i % 2 - 1) t.push_back(s[i]);
    }
    cout << t << endl;

    return 0;
}