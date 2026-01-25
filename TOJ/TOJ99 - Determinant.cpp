#include <iostream>
using namespace std;

int main() {
    double a, b, c ,d;
    cin >> a >> b >> c >> d;
    if (abs(a*d - b*c) >= 1e-7){
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}