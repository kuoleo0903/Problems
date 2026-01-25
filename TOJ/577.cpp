#include <iostream>
using namespace std;

int main() {
   int times, base, power, i, j;
   cin >> times;
   for (i=0; i<times; i++){
	   cin >> base >> power;
	   long long total = base;
	   for(j=0; j<power-1; j++){
	   	total *= base;
	   }
	   cout << total << endl;
   }
    return 0;
}