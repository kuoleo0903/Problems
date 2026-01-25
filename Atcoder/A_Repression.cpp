#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    vector<int> v;
    int n;

    for (int i=0; i<3; i++){
        cin >> n;
        v.push_back(n);
    }
    
    sort(v.begin(), v.end());

    cout << v[1] + v[2] << endl;


    return 0;
}