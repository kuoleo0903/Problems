#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	bool judge = 1;
	for (string::size_type i=0; i<s.size(); i++){
		if (s[i] == 's' and s[i+1] == 's'){
			cout << "hiss" << endl;
			judge = 0;
			break;
		}
	}
	if (judge){
			cout << "no hiss" << endl; 
	}
	
	cout << endl;
    return 0;
}