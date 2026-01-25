#include <iostream>
using namespace std;

void drawTriangle(int high, bool isUpsideDown) {
    int start = isUpsideDown ? high - 4 : 0;
    int end = isUpsideDown ? -1 : high - 3;
    int step = isUpsideDown ? -1 : 1;
    for (int t = start; isUpsideDown ? t > end : t < end; t += step){
        for (int j = 0; j < high - t - 1; j++){
            cout << " ";
        }
        for (int h = 0; h < t * 2 + 1; h++){
            cout << "*";
        }
        cout << endl;
    }
}

void drawMiddle(int high) {
    for (int st1 = 0; st1 < high * 2 - 1; st1++){
        cout << "*";
    }
    cout << endl << " ";
    for (int st2 = 0; st2 < 2 * (high - 2) + 1; st2++){
        cout << "*";
    }
    cout << endl;
    for (int st3 = 0; st3 < high * 2 - 1; st3++){
        cout << "*";
    }
    cout << endl;
}

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++){
        int high;
        cin >> high;
        drawTriangle(high, false);
        drawMiddle(high);
        drawTriangle(high, true);
    }
    return 0;
}
