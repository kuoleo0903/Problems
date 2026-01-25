#include <iostream>
using namespace std;

int a[5];

int main() {
	int score, temp;
	for (int i=0; i<5; i++){
		temp = 0;
		for (int j=0; j<4; j++){
	   		cin >> score;
   			temp += score;
   		}
		a[i] = temp;
	}
   
	int max = a[0], index = 1;
	for (int i=0; i<5; i++){
		if (a[i]>max){
			max = a[i];
			index = i+1;
		}
	}
   
	cout << index << " " << max << endl;
	return 0;
}