#include <iostream>
using namespace std;

int main() {
    int time, sum = 0, count = 0;
    while(cin >> time) {
        if(count % 2 == 0) {
            sum -= time;
        } else {
            sum += time;
        }
        count++;
    }
    if(count % 2 != 0) {
        cout << "Still running";
    } else {
        cout << sum;
    }
    return 0;
}
