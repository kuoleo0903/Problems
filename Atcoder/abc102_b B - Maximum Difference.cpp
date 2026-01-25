#include <iostream>
using namespace std;

int a[105];

int main() {
	int N, i, max=0, min=1000000001;
	cin >> N;
	for (i=0; i<N; i++){
		cin >> a[i];
	}
	for (i=0; i<N; i++){
		if (max < a[i]){
			max = a[i];
		}
		if (min > a[i]){
			min = a[i];
		}
	}
	
	if (!max - min < 0){
		cout << max - min << endl;
	}
	else{
		cout << min - max << endl;
	}
	
    return 0;
}