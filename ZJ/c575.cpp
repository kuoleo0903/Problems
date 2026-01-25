/*如果一個直徑 D 能夠用 K 個基地台服務所有點，那麼任何大於 D 的直徑也一定可以，
因為更大的服務範圍只會讓問題更容易解決。反之，如果一個直徑 D 無法滿足需求，
那麼任何小於 D 的直徑也一定無法。*/

/*全部數列作為直徑最大 因此有單調性*/

/*check() 在給定的直徑 D 下，是否可以使用不超過 K 個基地台來服務所有點。*/


#include <bits/stdc++.h>
using namespace std;

int n, k;
int p[100005];

bool check(int d){
    int current_end = 0, cnt = 0;
    for (int i=0; i<n; i++){
        if (current_end < p[i]){
            cnt++;
            current_end = p[i] + d;
        }
    }
    return cnt <= k;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> p[i];
    }

    sort(p, p+n);

    int left = 0, right = 1e9+5;
    while (left != right){
        int m = (left + right) / 2;
        if (check(m)) right = m;
        else left = m + 1;
    }
    cout << left << endl;

    return 0;
}