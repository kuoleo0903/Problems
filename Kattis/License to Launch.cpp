# include <iostream>
using namespace std;

int a[100005];

int main(){
	int num, i, min, l;
	cin >> num;
	min = 2000000000;
	l = 0;
	for (i=1; i<=num; i++){
		cin >> a[i];
		if (min > a[i]){
			min = a[i];
			l = i;
		}
	}
	cout << l-1;
	return 0;
}