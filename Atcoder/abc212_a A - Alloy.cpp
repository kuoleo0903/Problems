# include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (0 < a){
		if (b == 0){
			cout << "Gold" << endl;
		}
		else {
			cout << "Alloy" << endl;	
		}
	}
	else {		//a == 0
		if (0 < b){
			cout << "Silver" << endl;
		}
	}
	return 0;
}