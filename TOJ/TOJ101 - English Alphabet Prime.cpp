#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    char letter = 'A' + N - 1; // 將'A'映射為0，然後添加N-1以獲得對應的字母

    cout << letter << endl;

    return 0;
}