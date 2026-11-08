#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt=0;
    string s;
    cin >> n >> s;
    
    int max_num = n/11;
    for(int i=0; i<n; i++) if (s[i] == '8') cnt++;
    cout << min(cnt, max_num) << endl;
    return 0;
}