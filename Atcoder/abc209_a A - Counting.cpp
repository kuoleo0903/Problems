# include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (b > a){
		cout << b-a+1 << endl;
	}
	else{
		cout << "0" << endl;
	}
	return 0;
}