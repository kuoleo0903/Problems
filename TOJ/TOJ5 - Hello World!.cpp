#include <iostream>
using namespace std;

int main() {
    string name;
    getline(cin, name); // 讀取包含空白的名字

    cout << "Hello ," << name << " !" << endl;

    return 0;
}