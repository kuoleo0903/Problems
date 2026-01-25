#include <iostream>
using namespace std;

int main() {
	int times, i, num, M, m, count=1;
	while(cin >> times){
		M = -1000001;
		m = 1000001;
		for (i=0; i<times; i++){
			cin >> num;
			M = max(M, num);
			m = min(m, num);
		}
		cout << "Case " << count << ": " << m << " " << M << " " << M-m << endl;
		count++;
	}
   
    return 0;
}