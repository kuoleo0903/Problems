#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int N, C=-1e5;
	long long M=0, E=0, x; 
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> x;
		M += abs(x);
		E += x*x;
		if (abs(x) > C){
			C = abs(x);
		}
	}
	long double Euclidian = sqrtl(E);
	cout << fixed << setprecision(15);
	cout << M << endl << Euclidian << endl << C << endl;
	return 0;
}