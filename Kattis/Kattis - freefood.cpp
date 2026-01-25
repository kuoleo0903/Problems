#include <iostream>
using namespace std;

int days[400];

int main() {
	int times, s, t;
	cin >> times;
	for (int i=0; i<times; i++){
		cin >> s >> t;
		for (int k=s; k<=t; k++){
			days[k]++;
		}
	}
	int free=0;
	for (int j=0; j<370; j++){
		if (days[j]){
			free++;
		}
	}
	cout << free << endl;
    return 0;
}