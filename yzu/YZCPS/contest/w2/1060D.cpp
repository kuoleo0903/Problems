#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    long long lt, rt;
    vector<long long> l, r;
    for (int i=0; i<n; i++){
        cin >> lt >> rt;
        l.push_back(lt);
        r.push_back(rt);
    }
    
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    
    long long ans = n;
    for (int i=0; i<n; i++) ans += max(l[i], r[i]);
    cout << ans << endl;
    
    return 0;
}