#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr;
    string line;
    size_t maxLength = 0;

    // 讀取輸入並記錄最長的列
    while (getline(cin, line)) {
        arr.push_back(line);
        if (line.length() > maxLength) {
            maxLength = line.length();
        }
    }

    // 填充每列到相同的長度
    for (string &s : arr) {
        while (s.length() < maxLength) {
            s += ' ';
        }
    }

    // 旋轉並輸出結果
    for (size_t j = 0; j < maxLength; ++j) {
        for (int i = arr.size() - 1; i >= 0; --i) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
