// Problem: Joint Attack
// Contest: Kattis
// URL: https://open.kattis.com/problems/jointattack
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;

int num[50];

// Xn-1 + 1/Xn 化假分數
// 約分
// Xn-2 + 1/該分數
// =Xn-2 + 該分數的倒數
pair <int, int> fractions(int n, int setup){ //分數
	int up, down, temp;
	up = num[n]*num[n-1] + setup;
	down = num[n];
	temp = gcd(up, down);
	setup = gcd(up, down);
	down = temp;
	n--;
	if (n == 1){
		up = setup;
		pair <int, int> last(up, down);
		return last;
	}
	fractions(n, setup);

	pair <int, int> last(up, down);
	return last;
}

int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> num[i];
	}
	pair<int, int> temp;
	temp = fractions(n, 1);
	cout << temp.second << "/" << temp.first << endl;
	return 0;
}