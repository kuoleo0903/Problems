#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n[3];
    for (int i=0; i<3; i++){
        cin >> n[i];
    }

    sort(n, n+3);
    int a=n[0], b=n[1], c=n[2];

    cout << a << " " << b << " " << c << endl;
    if (a + b <= c) cout << "No" << endl;
    else if (a*a + b*b < c*c) cout << "Obtuse" << endl;
    else if (a*a + b*b == c*c) cout << "Right" << endl;
    else if (a*a + b*b > c*c) cout << "Acute" << endl;

    return 0;
}