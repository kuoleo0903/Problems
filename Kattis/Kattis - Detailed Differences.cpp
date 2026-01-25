#include <iostream>
using namespace std;

int main() {
	int round;
	cin >> round;
	
	string A, B;
	
	for (int i=0; i<round; i++){
		cin >> A >> B;
		cout << A << endl << B << endl;
		for (string::size_type j=0; j<A.size(); j++){
			if (A[j] == B[j]){
				cout << ".";
			}
			else{
				cout << "*";
			}
		}
		cout << endl << endl;
	}
    return 0;
}