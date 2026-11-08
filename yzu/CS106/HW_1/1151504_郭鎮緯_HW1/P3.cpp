#include <iostream>
using namespace std;

int main() {
    const double tax = 0.09;
    
    double sale_amount;
    
    cout << "Enter sale amount: ";
    cin >> sale_amount;
    cout << "Sale amount: " << sale_amount << endl;
    cout << "Tax amount: " << sale_amount * tax << endl;
    cout << "Total amount due: " << sale_amount + sale_amount * tax << endl;

    return 0;
}