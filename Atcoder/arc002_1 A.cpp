# include <iostream>
using namespace std;

int main(){
	
	int y;
	cin >> y;
	
	if (y%400 != 0 and y%100 == 0){
		cout << "NO" << endl;
	}
	else if (y%4 != 0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}