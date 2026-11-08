#include <iostream>
#include <string>

using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int longest_repetition = 1;
    int current_repetition = 1;

    // 遍历DNA序列，查找最长重复子串的长度
    for (string::size_type i = 1; i < sequence.length(); ++i) {
        if (sequence[i] == sequence[i - 1]) {
            current_repetition++;
        } else {
            longest_repetition = max(longest_repetition, current_repetition);
            current_repetition = 1;
        }
    }

    // 检查最后一个字符
    longest_repetition = max(longest_repetition, current_repetition);

    cout << longest_repetition << endl;

    return 0;
}
