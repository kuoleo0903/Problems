//https://atcoder.jp/contests/arc096/tasks/arc096_a

#include <iostream>
#include <algorithm>
using namespace std;
////////
int main() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	int total = 0;
	if (2*c <= a+b) { // 全買C
		total += 2*c*min(x, y);
		if (x > y) {
			total += min(a, 2*c)*(x-y);
		} else if (y > x) {
			total += min(b, 2*c)*(y-x);
		}
	} else { // 部分C + 剩下個別買
		total += a*x + b*y;
	}
	cout << total << endl;
	return 0;
}