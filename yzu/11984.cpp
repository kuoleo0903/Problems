#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        float a, b;
        cin >> a >> b;
        float up = b*5/9;
        float t = a + up;
        cout << "Case " << i+1 << ": " << fixed << setprecision(2) << t << endl;
    }

    return 0;
}