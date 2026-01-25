#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool openQuote = true; // 用於追蹤當前處於開引號還是關引號的狀態

    while (getline(cin, line)) {
        // 遍歷每一行中的每個字符
        for (char &ch : line) {
            if (ch == '"') {
                if (openQuote) {
                    cout << "``"; // 如果是開引號，替換為兩個反引號
                } else {
                    cout << "''"; // 如果是關引號，替換為兩個單引號
                }
                openQuote = !openQuote; // 切換引號狀態
            } else {
                cout << ch; // 如果不是雙引號，直接輸出字符
            }
        }
        cout << endl;
    }

    return 0;
}
