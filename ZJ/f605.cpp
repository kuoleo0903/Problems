#include <bits/stdc++.h>
using namespace std;


int a[105][105];
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, d;
    cin >> n >> d;

    int cnt = 0, total = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++){
            cin >> a[i][j];
        }
        sort(&a[i][0], &a[i][3]);
        // for (int k=0; k<3; k++) cout << a[i][k] << endl;
        if (a[i][2] - a[i][0] >= d){
            cnt++;
            total += (a[i][0] + a[i][1] + a[i][2]) / 3;
        }
    }
    cout << cnt << " " << total << endl;

    return 0;
}