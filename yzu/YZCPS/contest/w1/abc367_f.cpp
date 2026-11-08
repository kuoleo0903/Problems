#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q;
    if(!(cin >> n >> q)) return 0;
    
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    vector<ull> hash_val(n+1);
    for(int i=0; i<=n; i++){
        hash_val[i] = rng();
    }
    
    vector<ull> pA(n+1, 0), pB(n+1, 0);
    for (int i=1; i<=n; i++){
        int a;
        cin >> a;
        pA[i] =  pA[i-1] + hash_val[a];
    }
    for (int i=1; i<=n; i++){
        int b;
        cin >> b;
        pB[i] =  pB[i-1] + hash_val[b];
    }
    
    while(q--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if ((r1-l1) != (r2-l2)){
            cout << "No\n";
            continue;
        }
        
        ull sumA = pA[r1] - pA[l1 - 1];
        ull sumB = pB[r2] - pB[l2 - 1];
        
        if(sumA == sumB) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}