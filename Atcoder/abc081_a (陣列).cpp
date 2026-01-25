# include <iostream>
using namespace std;

int main(){
	string s;
	int i, total;
	cin >> s;
	for (i=0; i<=2; i++){
		total += (s[i]-'0');
	}
	cout << total << endl;
	return 0;
}