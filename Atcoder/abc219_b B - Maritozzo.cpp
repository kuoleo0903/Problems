#include <iostream>
using namespace std;

int main() {
    string s[4], num;
    cin >> s[1] >> s[2] >> s[3] >> num;
    
    for (char a : num){
        cout << s[a - '0'];
    }
    return 0;
}