#include <iostream>
using namespace std;

int main() {
    int b, d, c, l;
    cin >> b >> d >> c >> l;
    bool found = false;
    for (int i = 0; i <= l; i++) {
        for (int j = 0; j <= l; j++) {
            for (int k = 0; k <= l; k++) {
                if (b*i + d*j + c*k == l) {
                    cout << i << " " << j << " " << k << "\n";
                    found = true;
                }
            }
        }
    }
    if (!found) {
        cout << "impossible" << "\n";
    }
    return 0;
}