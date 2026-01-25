// https://zerojudge.tw/ShowProblem?problemid=c039

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a, b, i=-1, length=0;
	while (cin >> a >> b){
		int i=-1, length=0;
		int n = max(a, b)+1;
		while (n >= min(a, b)) {
			n--;
			i++;
			int cnt=1, k=n;
			while (k != 1) {
				if (k%2 == 1){
					k = k*3+1;
				}
				else{
					k = k/2;
				}
				cnt++;
			}
			length = max(length, cnt);
			if (n <= min(a, b)){
				break;
			}
		}
    cout << a << " " << b << " " << length << endl;
	}
    return 0;
}