/**
 * Problem: cinema
 * Link: https://open.kattis.com/problems/cinema
 * Date: 2026-03-22
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, tmp;
    cin >> n >> m;

    queue<int> q;
    for (int i = 0; i < m; i++){
        cin >> tmp;
        q.push(tmp);
    }
    int cnt = 0;
    for (int i = 0; i < m; i++){
        if (n >= q.front()){
            n -= q.front();
            q.pop();
        }
        else{
            q.pop();
            cnt ++;
            if (n == 0){
                cnt += m-i-1;
                break;
            }
        }
    }
    
    cout << cnt << endl;

    return 0;
}