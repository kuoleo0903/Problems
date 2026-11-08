// Problem: B. Find x
// Contest: Codeforces - BPCEI 結訓考（測機）
// URL: https://codeforces.com/gym/678512/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void find_len()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a[105][105];
    for(int i=0; i<105; i++){
        for(int j=0; j<105; j++){
            a[i][j] = -1;
        }
    }

    int n, m;
    cin >> n >> m;

    char tmp;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> tmp;
            if (tmp == 'X') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }


    int dx[4] = {1, 1, -1, -1};//右上, 右下, 左下, 左上
    int dy[4] = {1, -1, -1, 1};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 1){

            }
        }
    }

    return 0;
}