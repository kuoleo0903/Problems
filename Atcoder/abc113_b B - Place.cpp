#include <iostream>
#include <math.h>
using namespace std;

int h[1005];
float a[1005];

int main() {
	int N, T, A;
	cin >> N >> T >> A;
	for (int i=1; i<=N; i++){
		cin >> h[i];
		a[i] = T-0.006*h[i];
	}
	
	float temp=100005;
	int record;
	for (int i=1; i<=N; i++){
		if (abs(a[i]-A) < abs(temp)){
			temp = abs(a[i]-A);
			record = i;
		}
	}
	cout << record << endl;
    return 0;
}