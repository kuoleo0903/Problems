// Problem: n736
// Contest: ZeroJudge
// URL: https://zerojudge.tw/ShowProblem?problemid=n736
// Memory Limit: 64 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};
pair find(const vector<vector<char>> &g, const string &ss, int m, int n){
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            int cnt = 0;
            if (g[i][j] == ss[cnt]){
                cnt++;
                
            }

        } 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    vector<vector<char>> g(m, vector<char>(n));
    for(int i=1; i<m; i++){
        string s;
        cin >> s;
        for(int j=1; j<n; j++){
            g[i][j] = tolower(s[j]);
        }
    }

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s, ss;
        cin >> s;
        for (auto x : s) ss.push_back(tolower(x));
        pair<int, int> p = find(g, ss, m, n);
        cout << p.first << p.second << endl;
    }


    return 0;
}