#include <iostream>
using namespace std;

int main() {
	string l;
	cin >> l;
	
	cout << l[0];
	for (string::size_type i=0; i<l.size(); i++){
		if (l[i] == '-'){
			cout << l[i+1];
		}
	}
	cout << endl;
    return 0;
}