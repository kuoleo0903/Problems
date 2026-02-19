#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n, a[3], d, num=0, sum=0;
    cin >> n >> d;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++){
            cin >> a[j];
        }
        sort(a, a+3);
        // for (auto x : a) cout << x << " "; 
        if (a[2] - a[0] >= d) {
            sum += (a[0] + a[1] + a[2])/3;
            num++;
        }
    }
    
    cout << num << " " << sum << endl;
    return 0;
}