#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
        vector<int> v(50, 0);
        vector<int> ans(50, 0);
		int n,k;
        cin>>n>>k;
        for(int j=0; j<n; j++){
            int l, r;
            cin >> l >> r;
            if(l<=k && k<=r){
                v[l-1] += 1;
                v[r] += -1;
            }
        }
        int add=0;
        for(int j=0; j<50; j++){
            add += v[j];
            ans[j] += add;
        }
        sort(ans.begin(), ans.end(), greater());
        if(ans[0] == ans[1]) cout << "NO" << "\n";
        else cout << "YES" << "\n";
	}
}