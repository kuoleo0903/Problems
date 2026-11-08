#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, d;
    cin >> n >> d;
    int tmp;
    bool judge = 1;
    for (int i = 0; i < n; i++){
        cin  >> tmp;
        if (tmp <= d){
            cout << "It hadn't snowed this early in " << i <<" years!" << endl;
            judge = 0;
            break;
        }
    }

    if (judge) cout << "It had never snowed this early!" << endl;
    
    return 0;
}