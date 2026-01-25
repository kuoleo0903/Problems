#include <bits/stdc++.h>
using namespace std;

#define N 100005
#define pii pair<int, int>

bool cmp(pii a, pii b){
    return a.second * b.first > b.second * a.first;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;

    int w[N], f[N];
    for (int i=0; i<n; i++) cin >> w[i];
    for (int i=0; i<n; i++) cin >> f[i];

    vector<pii> goods;
    for (int i=0; i<n; i++) goods.push_back({w[i], f[i]});

    sort(goods.begin(), goods.end(), cmp);

    long long total = 0, ans = 0;
    for (int i=0; i<n; i++){
        ans += total * goods[i].second;
        total += goods[i].first;
    }
    cout << ans << endl;

    return 0;
}