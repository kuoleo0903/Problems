#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, price;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter unit price: ";
    cin >> price;

    int subtotal = n * price;
    cout << "Subtotal: " << subtotal << "\n";

    double rate;
    if (n < 10) rate = 1.0;
    else if (n < 50) rate = 0.97;
    else if (n < 100) rate = 0.95;
    else rate = 0.90;

    double total = subtotal * rate;
    double discount = subtotal - total;

    cout << "Discount: " << discount << "\n";
    cout << "Total: " << total << "\n";

    return 0;
}