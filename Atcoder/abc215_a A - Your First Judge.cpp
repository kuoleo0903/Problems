#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	if (s == "Hello,World!") {
		cout << "AC" << endl;
	}
	else{
		cout << "WA" << endl;
	}
    return 0;
}