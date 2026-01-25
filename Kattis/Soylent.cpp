# include <iostream>
using namespace std;

int main(){
	int i, n, a;
	cin >> n;
	for (i=1; i<=n; i++){
		cin >> a;
		if (a%400 == 0){
			cout << a/400 << endl;
		}
		else{
			cout << a/400+1 << endl;
		}
	}
	return 0;
}