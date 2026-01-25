# include <iostream>
using namespace std;

int main(){
	long long n;
	n = 299792458;
	cout << "1 Light-second(LS) is " << n << " metres." << endl;
	cout << "1 Light-minute(LM) is " << n*60 << " metres." << endl;
	cout << "1 Light-hour(LH) is " << n*60*60 << " metres." << endl;
	cout << "1 Light-day(LD) is " << n*60*60*24 << " metres." << endl;
	cout << "1 Light-week(LW) is " << n*60*60*24*7 << " metres." << endl;
	cout << "1 Light-year(LY) is " << n*60*60*24*365 << " metres." << endl;
	return 0;
}