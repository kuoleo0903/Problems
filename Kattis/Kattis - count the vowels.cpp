#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	int count=0;
	for (string::size_type i=0; i<s.size(); i++){
		if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
			count++;
		}
	}
	cout << count << endl;
    return 0;
}