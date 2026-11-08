#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a = 1, b = 2;
    int *x = &a;
    *x += b;
    x = &b;
    cout << x << endl;
    cout << *x << endl;
    cout << &x << endl;

    return 0;
}