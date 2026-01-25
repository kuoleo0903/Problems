//https://atcoder.jp/contests/arc096/tasks/arc096_a

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	if ((a+b)/2 <= c){ //A、B 要乘2
		cout << x*a + y*b << endl;
	}
	
	else { //全買C
		int money;
		if (a>c and b>c and bool((x+y)*c < x*a + y*b)){
			cout << (x+y)*c << endl;
		}
		else{//部分C + 剩下個別買
			cout << min(a, b)*c + (money = max(x, y) == x ? a : b)*abs(x-y)<< endl;
		}
	}
	
	return 0;
}