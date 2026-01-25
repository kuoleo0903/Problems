#include <iostream>
#include <string>
using namespace std;

int main() {
    string favType, drinkType;
    string favSweet, drinkSweet;

    // 讀取自己喜歡的飲料種類和甜度
    cin >> favType >> favSweet;

    // 讀取拿到的飲料種類和甜度
    cin >> drinkType >> drinkSweet;

    // 比較種類和甜度
    if (favType == drinkType && favSweet == drinkSweet) {
        cout << "GOOD" << endl;
    } 
    else if (favType == drinkType || favSweet == drinkSweet) {
        cout << "=~=" << endl;
    } 
    else {
        cout << "OTZ" << endl;
    }

    return 0;
}