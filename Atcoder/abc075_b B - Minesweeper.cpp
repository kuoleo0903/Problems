#include <iostream>
using namespace std;

int main() {
	int H, W;
	string a[55][55], s;
	cin >> H >> W;
	for (int i=1; i<=H; i++){
		cin >> s;
		for (int j=1; j<=W; j++){
			a[i][j] = s[j-1];
		}
	}
	for (int i=1; i<=H; i++){
		for (int j=1; j<=W; j++){
			int temp=0;
			if (a[i][j] == "#"){
				continue;
			}
			else{
				if(a[i][j+1] == "#"){
					temp++;
				}
				if(a[i+1][j+1] == "#"){
					temp++;
				}
				if(a[i+1][j] == "#"){
					temp++;
				}
				if(a[i+1][j-1] == "#"){
					temp++;
				}
				if(a[i][j-1] == "#"){
					temp++;
				}
				if(a[i-1][j-1] == "#"){
					temp++;
				}
				if(a[i-1][j] == "#"){
					temp++;
				}
				if(a[i-1][j+1] == "#"){
					temp++;
				}
				a[i][j] = to_string(temp);
			}
		}
	}
	
	for (int i=1; i<=H; i++){
		for (int j=1; j<=W; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
    return 0;
}