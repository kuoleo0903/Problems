#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    const double TV_PRICE = 1400.00;
    const double DVD_PRICE = 220.00;
    const double REMOTE_PRICE = 35.20;
    const double TAX_RATE = 0.0825;

    int tv_qty, dvd_qty, remote_qty;

    cout << "How many TVs were sold? ";
    cin >> tv_qty;
    cout << "How many DVDs were sold? ";
    cin >> dvd_qty;
    cout << "How many remote controllers were sold? ";
    cin >> remote_qty;

    double tv_total = tv_qty * TV_PRICE;
    double dvd_total = dvd_qty * DVD_PRICE;
    double remote_total = remote_qty * REMOTE_PRICE;

    double total_before_tax = tv_total + dvd_total + remote_total;
    double tax = total_before_tax * TAX_RATE;
    double total = total_before_tax + tax;

    cout << left << fixed << setprecision(2);

    cout << setw(16) << "Quantity" << "\t"
         << setw(13) << "Description" << "\t"
         << setw(11) << "Unit Price" << "\t"
         << setw(12) << "Total Price" << endl;

    cout << setw(16) << tv_qty << "\t"
         << setw(13) << "TV" << "\t"
         << setw(11) << TV_PRICE << "\t"
         << setw(12) << tv_total << endl;

    cout << setw(16) << dvd_qty << "\t"
         << setw(13) << "DVD" << "\t"
         << setw(11) << DVD_PRICE << "\t"
         << setw(12) << dvd_total << endl;

    cout << setw(16) << remote_qty << "\t"
         << setw(13) << "Remote" << "\t"
         << setw(11) << REMOTE_PRICE << "\t"
         << setw(12) << remote_total << endl;

    cout << setw(16) << "Total before tax" << "\t"
         << setw(13) << "" << "\t"
         << setw(11) << "" << "\t"
         << setw(12) << total_before_tax << endl;

    cout << setw(16) << "Tax" << "\t"
         << setw(13) << "" << "\t"
         << setw(11) << "" << "\t"
         << setw(12) << tax << endl;

    cout << setw(16) << "Total" << "\t"
         << setw(13) << "" << "\t"
         << setw(11) << "" << "\t"
         << setw(12) << total << endl;

    return 0;
}