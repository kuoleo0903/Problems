#include <iostream>
using namespace std;

int a[100005];

int main() {
	int times;
	cin >> times;
	for (int i=0; i<times; i++){
		cin >> a[i];
	}
	for (int i=times-1; i>=0; i--){
		cout << a[i] << endl;
	}
    return 0;
}