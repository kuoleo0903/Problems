#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Abbreviation process
    int count = s.size() - 2; // Count the number of letters between the first and last letter
    cout << s[0] << count << s[s.size() - 1] << endl; // Output the abbreviation

    return 0;
}