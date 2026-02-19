// Problem: Cetvrta
// Contest: Kattis
// URL: https://open.kattis.com/problems/cetvrta
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    set<int> x, y;
    for (int i=0; i<3; i++){
        int a, b;
        cin >> a >> b;
        if (x.count(a)) x.erase(a);
        else x.insert(a);
        if (y.count(b)) y.erase(b);
        else y.insert(b);
    }
    cout << *x.begin() << " " << *y.begin() << endl;
    return 0;
}