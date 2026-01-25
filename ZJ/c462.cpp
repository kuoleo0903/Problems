#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int k;
    string s;
    cin >> k >> s;
    vector<int> len_num;

    int now = 0, last = -1, len = 0;

    for (int i=0; i<s.size(); i++){
        now = s[i] / 97 + 1;
        if (last == now) len++;
        else{
            if (len) len_num.push_back(len);
            last = now;
            len = 1;
        }
    }
    if (len) len_num.push_back(len);

    // for (auto x : len_num) cout << x;
    // cout << endl;

    int maxl = 0, accmu = 0;
    for (int i=0; i<len_num.size(); i++){
        if (len_num[i] >= k){
            accmu += k;
            while (len_num[i+1] == k){
                accmu += k;
                i++;
                // cout << accmu << "*" << endl;
            }
            if (len_num[i+1] > k) accmu += k;
            if (maxl < accmu) maxl = accmu;
            accmu = 0;
        }
    }    

    cout << maxl << endl;
    return 0;
}