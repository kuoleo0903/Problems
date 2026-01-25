#include <iostream>
using namespace std;

int main() {
    int n[2] = {0, 1}, cnt = 1, temp;
    while (n[1] < 100000000) {
    	cout << cnt << " ";
        temp = n[1];
        n[1] = n[1] + n[0];
        n[0] = temp;
        cnt++;
        cout << n[1] << endl;
    }
    // cout << cnt << endl;
    return 0;
}