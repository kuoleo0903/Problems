#include <iostream>
#include <string>

using namespace std;

int main() {
    long long N;
    cin >> N;

    string spells = "";
    while (N > 0) {
        if (N % 2 == 1) {
            spells += 'A'; // 使用 Spell A 放入一個新球
            N -= 1;
        } else {
            spells += 'B'; // 使用 Spell B 將球的數量翻倍
            N /= 2;
        }
    }

    // 輸出结果
    cout << string(spells.rbegin(), spells.rend()) << endl; // 字符串反轉輸出

    return 0;
}