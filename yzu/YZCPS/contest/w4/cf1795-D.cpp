#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 998244353;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n) {
    return power(n, MOD - 2);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;
    ll t = n / 3;

    vector<ll> fact(t + 1, 1);
    for (ll i = 2; i <= t; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    ll half = t / 2;
    ll denom = (fact[half] * fact[half]) % MOD;
    ll total = (fact[t] * modInverse(denom)) % MOD;

    vector<ll> c(3);
    for (ll i = 0; i < t; i++) {
        for (ll j = 0; j < 3; j++) {
            cin >> c[j];
        }
        sort(c.begin(), c.end());

        if (c[0] == c[1] && c[1] == c[2]) {
            total = (total * 3) % MOD;
        } else if (c[0] == c[1]) {
            total = (total * 2) % MOD;
        }
    }

    cout << total << "\n";

    return 0;
}