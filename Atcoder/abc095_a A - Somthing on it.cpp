#include <iostream>
using namespace std;

char s[4];

int main() {
	int price=700;
	cin >> s;
	for (int i=0; i<3; i++){
		if (s[i] == 'o'){
			price += 100;
		}
	}
	cout << price << endl;
    return 0;
}