# include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (c <= a and a < d){
		if (b <= d){
			cout << b-a << endl;
		}
		else {
			cout << d-a << endl;	
		}
	}
	else if (a <= c){
		if (b < c){
			cout << "0" << endl;
		}
		else if (c <= b and b < d){
			cout << b-c << endl;
		}
		else{
			cout << d-c << endl;
		}
	}
	else{
		cout << "0" << endl;
	}
	return 0;
}