#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int minV = *min_element(v.begin(), v.end());
        int maxV = *max_element(v.begin(), v.end());

        if (maxV - minV + 1 == n)
            cout << minV << " " << maxV << " yes" << endl;
        else
            cout << minV << " " << maxV << " no" << endl;
    }
    return 0;
}
