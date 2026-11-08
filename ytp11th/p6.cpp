#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 998244353;

vector<vector<ll>> mul(vector<vector<ll>>& A, vector<vector<ll>>& B) {
    int n = A.size();
    vector<vector<ll>> C(n, vector<ll>(n, 0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

vector<vector<ll>> mpow(vector<vector<ll>> M, ll k) {
    int n = M.size();
    vector<vector<ll>> remain(n, vector<ll>(n, 0));
    for (int i=0; i<n; i++) remain[i][i] = 1;

    while (k > 0) {
        if (k%2 == 1) {
            remain = mul(remain, M);
        }
        M = mul(M, M);
        k /= 2;
    }
    return remain;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    ll k;
    int l, r;
    cin >> n >> k >> l >> r;

    l--; r--; 

    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << a[0] % MOD << endl;
        return 0;
    }

    vector<vector<ll>> M(n, vector<ll>(n, 0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (abs(i-j) == 1) {
                M[i][j] = 1;
            } else if (i == j) {
                if (i==0 or i==n-1) {
                    M[i][j] = n-2; //邊
                } else {
                    M[i][j] = n-3; //中間
                }
            } else {
                M[i][j] = 0; //不相鄰
            }
        }
    }

    vector<vector<ll>> final = mpow(M, k);

    ll sum_val = 0;

    for (int i=0; i<n; i++) {
        ll ways = 0;
        
        for (int j=l; j<=r; j++) {
            ways = (ways + final[i][j]) % MOD;
        }
        sum_val = (sum_val + (a[i] % MOD) * ways) % MOD;
    }

    cout << sum_val << endl;

    return 0;
}