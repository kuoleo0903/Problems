//https://zerojudge.tw/ShowProblem?problemid=b542

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, q, a[100005];
    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    // for(auto &s:a){
    //     cout << s << endl;
    // }

    while (q--){
        int k;
        cin >> k;

        bool finded = 0;
        
        for(int i=0; i<n; i++){
            finded = 0;
            int end = n-1, dis = end/2+1;
            // cout << a[end] - a[i] << endl;
            if (a[end]-a[i] == k){
                cout << "YES" << endl;
                finded = 1;
                // cout << finded << "*" << endl;
                break;
            }
            else if (a[end]-a[i] > k){
                end += dis;
                dis /= 2;
            }
            else { //a[end]-a[i] < k
                end += dis;
                dis /= 2;
            }
        }
        if (!finded){
            cout << "NO" << endl;
        }
    }
    
    return 0;
}