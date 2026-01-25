#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;

    // 處理特殊情況：如果輸入是 'A'，則輸出 '@'
    if (letter == 'A') {
        cout << "@" << endl;
    }
    else {
        // 輸出上一個大寫英文字母
        cout << static_cast<char>(letter - 1) << endl;
    }

    return 0;
}