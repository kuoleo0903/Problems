#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, m, tmp;
    cin >> n >> m;

    queue<int> q;
    for (int i = 0; i < m; i++){
        cin >> tmp;
        q.push(tmp);
    }
    int cnt = m;
    for (int i = 0; i < m; i++){
        if (n >= q.front()){
            n -= q.front();
            q.pop();
            cnt--;
        }
        else break;
    }
    
    cout << cnt << endl;

    return 0;
}