#include <bits/stdc++.h>
using namespace std;

int pascal(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    }
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

int main() {
    int n;
    cout << "Enter the size of the Pascal triangle: ";
    cin >> n;
    cout << "The coefficients are shown below:" << endl;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}