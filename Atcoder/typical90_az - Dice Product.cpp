#include <iostream>
using namespace std;

int n, num[7], total[105];

int main() {
	long long temp=1;
	cin >> n;
	for (int i=0; i<n; i++){
		for(int j=0; j<6; j++){
			cin >> num[j];
			total[i] += num[j];
		}
		temp *= total[i];
		temp %= 1000000007;
	}
	cout << temp << endl;
	return 0;
}