#include <bits/stdc++.h>
using namespace std;

int parent[1000005];

int find(int x){
    if (parent[x] < 0) return x;
    return parent[x] = find(parent[x]);
}

bool same(int x, int y){
    int jx = find(x);
    int jy = find(y);
    return jy == jx;
}

void unite(int x, int y){
    int px = find(x);
    int py = find(y);
    if (px != py){
        if(parent[px] < parent[py]) // 將 px 設定為子樹，也就是高度小的，取負號後為高度大的
            swap(px, py);
        parent[px] = min(parent[px], parent[py] - 1);
        parent[px] = py;
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int m, n, p;
    cin >> m >> n >> p;
    for (int i=0; i<m; i++){
        parent[i] = -1;
    }

    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        unite(a, b);
    }

    for (int i=0; i<p; i++){
        int a, b;
        cin >> a >> b;
        if (same(a, b)) cout << ":)" << endl;
        else cout << ":(" << endl;
    }

    return 0;
}