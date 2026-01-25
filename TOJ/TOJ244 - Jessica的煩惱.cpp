#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; // 讀取單字長度

    string word;
    cin >> word; // 讀取需要更改的單字

    // 加密單字
    for (int i = 0; i < T; ++i) {
        if (isupper(word[i])) {
            // 如果字母是大寫，則轉換為小寫
            word[i] = tolower(word[i]);
        } else {
            // 如果字母是小寫，則轉換為大寫
            word[i] = toupper(word[i]);
        }
    }

    // 輸出加密後的單字
    cout << word << endl;

    return 0;
}