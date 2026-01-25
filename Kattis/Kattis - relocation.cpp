#include <iostream>
using namespace std;

int a[100005];

int main() {
	int N, Q, judge, first, second;
	cin >> N >> Q;
	for (int i=1; i<=N; i++){
		cin >> a[i];
	}
	for (int i=0; i<Q; i++){
		cin >> judge >> first >> second;
		if (judge == 1){
			a[first] = second;
		}
		else{
			if (a[second]-a[first]<0){
				cout << a[first]-a[second] << endl;
			}
			else{
				cout << a[second]-a[first] << endl;
			}
		}
	}
    return 0;
}