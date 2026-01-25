#include <iostream>
#include <string>
using namespace std;

int i, j;

void change_location(int a[], int i, int j) {
    if (a[i] == 1 or a[j] == 1) {
        if (a[i] == 1) {
            a[i] = 0;
            a[j] = 1;
        } else {
            a[i] = 1;
            a[j] = 0;
        }
    }
}

int a[5] = {1, 0, 0, 0, 0};

int main() {
    string input;
    getline(cin, input);

    // 將字符串的每個字符分開
    for (char& c : input) {
        if (c == 'A') {
            i = 0;
            j = 1;
            change_location(a, i, j);
        } else if (c == 'B') {
            i = 1;
            j = 2;
            change_location(a, i, j);
        } else {
            i = 2;
            j = 0;
            change_location(a, i, j);
        }
    }

    int k;
    for (k = 0; k <= 2; k++) {
        if (a[k] == 1) {
            cout << k + 1 << endl;
        }
    }

    return 0;
}