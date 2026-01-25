#include <iostream>
using namespace std;

int a[200005], b[200005];

int main() {
	int times;
	cin >> times;
	for (int i=1; i<=times; i++){
		cin >> a[i];
		b[a[i]] = i;
	}
	for (int i=1; i<=times; i++){
		cout << b[i] << " ";
	}
    return 0;
}