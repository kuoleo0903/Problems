#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    double purchase_amount, cash_amount;
    
    cout << "Enter the purchase amount: ";
    cin >> purchase_amount;
    
    cout << "Enter the cash amount: ";
    cin >> cash_amount;

    int change_cents = round((cash_amount - purchase_amount) * 100);

    int dollars = change_cents / 100;
    change_cents %= 100;

    int quarters = change_cents / 25;
    change_cents %= 25;

    int dimes = change_cents / 10;
    change_cents %= 10;

    int nickels = change_cents / 5;
    change_cents %= 5;

    int pennies = change_cents;

    cout << "Change:" << endl;
    cout << dollars << " dollars" << endl;
    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickels" << endl;
    cout << pennies << " pennies" << endl;

    return 0;
}