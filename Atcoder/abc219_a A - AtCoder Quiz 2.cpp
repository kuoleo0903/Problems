# include <iostream>
using namespace std;

int main(){
	int s;
	cin >> s;
	if (s >= 0 and s < 40 ){
		cout << 40 - s << endl;
	}
	else if (s >= 40 and s < 70 ){
		cout << 70 - s << endl;
	}
	else if (s >= 70 and s < 90 ){
		cout << 90 - s << endl;
	}
	else {
		cout << "expert" << endl;
	}
	return 0;
}