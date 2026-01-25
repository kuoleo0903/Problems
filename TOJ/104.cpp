#include <iostream>
using namespace std;

int main() {
	int high;
	cin >> high;
	for (int i=0; i<high; i++){
		for (int j=0; j<high-i-1; j++){
			cout << " ";	
		}
		for (int k=0; k<i*2+1; k++){
			cout << "*";
		}
		cout << endl;
	}
	
    return 0;
}