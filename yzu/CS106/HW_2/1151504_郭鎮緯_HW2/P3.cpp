#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    const double TAX_RATE = 0.095;
    const double TIP_RATE = 0.20;
    const double CHILD_SHARE = 0.75;

    cout << "Enter check value: ";
    double check_value;
    cin >> check_value;

    double total_check = check_value * (1.0 + TAX_RATE + TIP_RATE);
    cout << "Total check after tax and tip: " << fixed << setprecision(2) << total_check << endl;

    double fam1_shares = 2 * 1.0 + 2 * CHILD_SHARE; //3.5
    double fam2_shares = 2 * 1.0 + 1 * CHILD_SHARE; //2.75
    double fam3_shares = 2 * 1.0 + 1 * CHILD_SHARE; //2.75
    
    double total_shares = fam1_shares + fam2_shares + fam3_shares; //9.0

    double fam1_pays = total_check * (fam1_shares / total_shares);
    double fam2_pays = total_check * (fam2_shares / total_shares);
    double fam3_pays = total_check * (fam3_shares / total_shares);

    cout << "Family 1 pays: " << fam1_pays << endl;
    cout << "Family 2 pays: " << fam2_pays << endl;
    cout << "Family 3 pays: " << fam3_pays << endl;

    return 0;
}