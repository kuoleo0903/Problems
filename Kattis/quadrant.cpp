#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int x, y;
    cin >> x >> y;

    if (x>0){
        if (y>0){
            cout << 1 << endl;
        }else{
            cout << 4 << endl;
        }
    }else{
        if (y>0){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
        
    }
    return 0;
}