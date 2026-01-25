#include <iostream>
using namespace std;

int main(){
    int x, y, r, top, bottom, left, right;
    cin >> x >> y >> r;
    top = y + r;
    bottom = y - r;
    left = x - r;
    right = x + r;
    
    cout << left << " " << top << endl;
    cout << right << " " << top << endl;
    cout << right << " " << bottom << endl;
    cout << left << " " << bottom << endl;
    
    return 0;
}