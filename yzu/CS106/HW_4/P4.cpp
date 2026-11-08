#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << " Ce   Fahr   Ce   Fahr   Ce   Fahr   Ce   Fahr   Ce   Fahr\n";
    cout << "---------------------------------------------------------\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < 20; ++i) {
        for (int col = 0; col < 5; ++col) {
            int celsius = i + col * 20;
            double fahrenheit = celsius * 180.0 / 100.0 + 32.0;

            cout << setw(3) << celsius << " " 
                 << setw(6) << fahrenheit;

            if (col < 4) {
                cout << "  ";
            } else {
                cout << "\n";
            }
        }
    }

    return 0;
}