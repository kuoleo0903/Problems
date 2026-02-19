#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int k;
    cin >> k;

    if(k/3 == 0) cout << "Winter!" << endl;
    else if(k/3 == 1) cout << "Spring!" << endl;
    else if(k/3 == 2) cout << "Summer!" << endl;
    else if(k/3 == 3) cout << "Autumn!" << endl;
    else if(k/3 == 4) cout << "Winter!" << endl;
    return 0;
}