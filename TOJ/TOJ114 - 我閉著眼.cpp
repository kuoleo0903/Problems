#include <iostream>
using namespace std;

int a[5][6];

int main() {
	for (int i=0; i<5; i++){
		for (int j=0; j<6; j++){
			cin >> a[i][j];
		}
	}
	
	bool judge = false;
	for (int i=0; i<5; i++){
		for (int j=0; j<4; j++){
			if (a[i][j] == a[i][j+1] and a[i][j] == a[i][j+2]){
				judge = true;
			}
		}
	}
	
	for (int i=0; i<3; i++){
		for (int j=0; j<6; j++){
			if (a[i][j] == a[i+1][j] and a[i][j] == a[i+2][j]){
				judge = true;
			}
		}
	}
	
	if (judge){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
    return 0;
}