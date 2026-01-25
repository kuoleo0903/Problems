#include <iostream>
#include <vector>

int main() {
    std::vector<int> times;
    int input;
    while (std::cin >> input) {
        times.push_back(input);
    }

    if (times.size() % 2 != 0) {
        std::cout << "Still running" << std::endl;
    } else {
        int total = 0;
        for (std::vector<int>::size_type i = 0; i < times.size(); i += 2) {
            total += times[i+1] - times[i];
        }
        std::cout << total << std::endl;
    }

    return 0;
}
