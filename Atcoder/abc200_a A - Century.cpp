# include <iostream>
using namespace std;

int main(){
	int y;
	cin >> y;
	if (y%100 == 0){
			cout << y/100 << endl;
		}
		else{
			cout << y/100+1 << endl;
		}
	return 0;
}