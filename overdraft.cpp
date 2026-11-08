#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    int tmp, total=0, result=0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        total += tmp;
        if (total < 0){
            result -= total;
            total = 0;
        }
    }
    cout << result << endl;

    return 0;
}