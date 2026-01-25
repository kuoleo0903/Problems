#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    while(n>0){
        n -= 3;
        cnt ++;
    }
    cout << cnt << endl;
    return 0;
}