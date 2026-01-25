#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    for (auto a : s){
        cout << char(a-7);
    }

    return 0;
}