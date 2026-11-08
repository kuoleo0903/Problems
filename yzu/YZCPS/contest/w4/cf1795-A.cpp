#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int m,n;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        reverse(t.begin(),t.end());
        s+=t;
        int cnt=0, len = n+m;
        bool judge = 1;
        for(int i=0;i<len-2;i++){
            if(s[i] == s[i+1]){
                if (s[i+1] == s[i+2]) {
                    judge = 0;
                    break;
                }
                cnt++;
            }
        }
        if (s[len-1] == s[len-2]) cnt++;
        if (judge && cnt <= 1){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
	}
}