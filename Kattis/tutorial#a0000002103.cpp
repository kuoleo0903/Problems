// Problem: ICPC Tutorial
// Contest: Kattis
// URL: https://open.kattis.com/problems/tutorial#a0000002103
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <cmath>
using namespace std;

bool compare(int m,long long n, int t){
	long long s=1;
	bool judge = 1;
	if (t == 1){
		for(int i=1; i<=n; i++){
			s*=i;
			if (s>m){
				judge = 0;
				break;
			}
		}
	}
	else if(t == 2){
		for(int i=1; i<=n; i++){
			s*=2;
			if (s>m){
				judge=0;
				break;
			}
		}
	}
	else if(t == 3){
		s = n*n*n*n;
		if (s>m){
			judge=0;
		}
	}
	else if(t == 4){
		s = n*n*n;
		if (s>m){
			judge=0;
		}
	}
	else if(t == 5){
		s = n*n;
		if (s>m){
			judge=0;
		}
	}
	else if(t == 6){
		s = n*log2(n)+1;
		if (s>m){
			judge=0;
		}
	}
	else if(t == 7){
		s = n;
		if (s>m){
			judge=0;
		}
	}
	return judge;
}

int main() {
	int m, n, t;
	long long s;
	cin >> m >> n >> t;
	s = compare(m, n, t);
	// cout << s << endl;
	if (s){
		cout << "AC" << endl;
	}
	else{
		cout << "TLE" << endl;
	}
	return 0;
}