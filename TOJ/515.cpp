#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    string n;
    cin >> n;

    if (n.length()==4 and n[0]==n[1] and n[0]==n[2] and n[0]==n[3]) cout << "GREAT!!" << endl;
    else cout << "OAQ" << endl;
    return 0;
}