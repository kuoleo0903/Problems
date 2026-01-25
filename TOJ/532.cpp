# include <iostream>
using namespace std;

int main(){
	int p, q, two=0, three=0;
	
	cin >> p >> q ;
	if (p%2 == 0){
		two++;
	}
	if (q%2 == 0){
		two++;
	}
	if (p%3 == 0){
		three++;
	}
	if (q%3 == 0){
		three++;
	}
	
	cout << two << " " << three << endl;
	
	return 0;
}