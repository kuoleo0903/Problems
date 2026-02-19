// Problem: Greedily Increasing Subsequence
// Contest: Kattis
// URL: https://open.kattis.com/problems/greedilyincreasing
// Memory Limit: 1024 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, now_max=0;
    cin >> n;
    
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    
    vector<int> final;
    for (int i=0; i<n; i++){
        if (a[i] > now_max) {
            now_max = a[i];
            final.push_back(now_max);
        }
    }
    
    cout << final.size() << endl;
    for (auto x : final) cout << x << " ";
    
    return 0;
}