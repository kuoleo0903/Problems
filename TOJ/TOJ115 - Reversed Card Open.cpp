#include <iostream>
#include <algorithm>
using namespace std;

string a[10];

int main() {
	
	fill(a, a+10, "EMPTY");
	
	int times, local;
	string card;
	
	cin >> times;
	for (int i=0; i<times; i++){
		cin >> card >> local;
		a[local-1] = card;
	}
	
	for (string x : a){
		cout << x << endl;
	}
	
    return 0;
}