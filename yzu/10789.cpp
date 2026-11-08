#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    //prime arr
    vector<int> v; v.push_back(2);
    for(int i=3; i<=2021; i++){
        bool judge = 1;
        for(auto x : v){
            if (i % x == 0){
                judge = 0;
            }
        }
        if (judge) v.push_back(i);
    }

    int t;
    cin >> t;

    int count[150];
    for (int i=0; i<t; i++){
        fill(count, count+150, 0);
        string s;
        cin >> s;
        for(auto x : s){
            count[int(x)]++;
        }

        cout << "Case " << i+1 << ": ";
        bool judge_2=1;
        for(int j=0; j<=127; j++){
            string f;
            for (auto x : v){
                if (x == count[j]) f.push_back(char(j));
            }
            if (!f.empty()){
                cout << f;
                judge_2 = 0;
            }
        }
        if (judge_2) cout << "empty";
        cout << "\n";
    }
    


    return 0;
}