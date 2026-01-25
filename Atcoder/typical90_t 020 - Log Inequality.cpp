#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long result = 1;
    for (int i = 0; i < b; i++) {
        result *= c;
    }

    if (a < result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}