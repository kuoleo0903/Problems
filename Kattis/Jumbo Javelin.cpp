# include <iostream>
using namespace std;

int a[105];

int main(){
	int i, num, total;
	cin >> num;
	total = 0;
	for (i=1; i<=num; i++){
		cin >> a[i];
		total += a[i];
	}
	cout << total-num+1 << endl;
	return 0;
}