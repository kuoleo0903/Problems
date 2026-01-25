#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> times;
    int input;
    while (cin >> input) {
        times.push_back(input);
    }

    if (times.size() % 2 != 0) {
        cout << "Still running" << endl;
    } else {
        int total = 0;
        for (vector<int>::size_type i = 0; i < times.size(); i += 2) {
            total += times[i+1] - times[i];
        }
        cout << total << endl;
    }

    return 0;
}
