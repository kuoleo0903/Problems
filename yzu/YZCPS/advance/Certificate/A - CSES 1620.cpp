#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long n, t;
    cin >> n >> t;

    vector<long long> spend(n, 0);
    for (int i=0; i<n; i++){
        cin >> spend[i];
    }
    sort(spend.begin(), spend.end());

    long long longest = t*spend[0], shortest = 1, mid, products;
    while(longest > shortest){
        mid = (longest + shortest)/2;
        products = 0;
        for(auto x : spend) products += mid/x;

        if(products >= t) longest = mid;
        else shortest = mid+1;
    }

    cout << longest << endl;
    return 0;
}