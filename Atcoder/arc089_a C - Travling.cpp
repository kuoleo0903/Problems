#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prev_t = 0, prev_x = 0, prev_y = 0;
    bool possible = true;
    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        int dist = abs(x - prev_x) + abs(y - prev_y);
        int time_diff = t - prev_t;
        if (dist > time_diff || (time_diff - dist) % 2 != 0) {
            possible = false;
            break;
        }
        prev_t = t;
        prev_x = x;
        prev_y = y;
    }
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}