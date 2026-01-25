#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Clear the newline character from the input buffer

    int count = 0;

    for (int i = 0; i < N; ++i) {
        string text;
        getline(cin, text);

        // Convert the text to lowercase for case-insensitive matching
        for (string::size_type j = 0; j < text.length(); ++j) {
            if (text[j] >= 'A' && text[j] <= 'Z') {
                text[j] = text[j] - 'A' + 'a';
            }
        }

        // Check if the text contains 'pink' or 'rose'
        if (text.find("pink") != string::npos || text.find("rose") != string::npos) {
            count++;
        }
    }

    // Output the count if there's at least one occurrence, else print the default message
    if (count > 0) {
        cout << count << endl;
    } else {
        cout << "I must watch Star Wars with my daughter" << endl;
    }

    return 0;
}
