#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> v, pre;
    for(long long i=0; i<n; i++){
        long long tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    for(auto x : v) v.push_back(x);
    pre.push_back(0);
    for(long long i=1; i<v.size(); i++){
        pre.push_back(pre[i-1]+v[i-1]);
    }
    long long f=0, cnt=0;
    while(f<n){
        for(long long i=1; i<n; i++){
            long long s=f;
            s += i;
            if ((pre[s] - pre[f]) % m == 0) cnt++;
        }
        f++;
    }
    cout << cnt << endl;
    
    

    return 0;
}