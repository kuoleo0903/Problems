// 暴力
// #include <bits/stdc++.h>
// using namespace std;

// bool is_palindrome(int x) {
//     string s = to_string(x);
//     string t = s;
//     reverse(t.begin(), t.end());
//     return s == t;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int A, B;
//     cin >> A >> B;

//     int count = 0;
//     for (int i = A; i <= B; i++) {
//         if (is_palindrome(i)) count++;
//     }

//     cout << count << endl;
//     return 0;
// }

// 建表
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    vector<int> palindromes;
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                int num = 10000 * a + 1000 * b + 100 * c + 10 * b + a;
                palindromes.push_back(num);
            }
        }
    }

    int count = 0;
    for (int x : palindromes) {
        if (x >= A && x <= B) count++;
    }

    cout << count << "\n";
    return 0;
}
