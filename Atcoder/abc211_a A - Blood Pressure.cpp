#include <iostream>
#include <iomanip> // 用於設置精度
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double C = A/3.0 + B*2.0/3.0;

    // 設置輸出精度微小數點後五位
    cout << fixed << setprecision(5) << C << endl;

    return 0;
}
