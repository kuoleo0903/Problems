#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    
    int room=0;
    queue<pair<int, int>> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j] == '.'){
                q.push({i, j});
                s[i][j] = '#';
                while (!q.empty()){
                    auto [x, y] = q.front();
                    q.pop();
                    for(int k=0; k<4; k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (nx>=0 && nx<n && ny>=0 && ny<m && s[nx][ny]=='.'){
                            s[nx][ny] = '#';
                            q.push({nx, ny});
                        }
                    }
                }
                room++;
            }
        }
    }
    cout << room << "\n";
    return 0;
}