#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    string D;
    
    // 讀取加密時使用的字元偏移量和要解碼的字串
    cin >> t >> D;

    // 解碼字串
    for (char& c : D) {
        // 將字母向左移動 t 個位置
        c -= t;
        
        // 如果移動後的字母小於 'A'，則從字母表的末尾繼續
        if (c < 'A') {
            c += 26;
        }
    }

    // 輸出解碼後的訊息
    cout << D << endl;

    return 0;
}