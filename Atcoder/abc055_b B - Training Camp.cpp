#include <iostream>
using namespace std;

int main() {
	int factorial;
	long long total=1;
	cin >> factorial;
	for (int i=1; i<=factorial; i++){
		total = (total * i) % 1000000007;
	}
	cout << total << endl;
	return 0;
}