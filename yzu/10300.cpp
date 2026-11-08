#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int f;
        cin >> f;
        long long money = 0;
        for (int j=0; j<f; j++){
            long long sq, animal, lv;
            cin >> sq >> animal >> lv;

            money += sq*lv;
        }
        cout << money << endl;
    }

    return 0;
}