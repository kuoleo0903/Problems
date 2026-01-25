#include <iostream>
using namespace std;

int main() {
   int N, num, base=0, i, count=0;
   cin >> N;
   for (i=0; i<N; i++){
   	cin >> num;
   	if (i==0 or num > base){
   		count++;
   	}
   	base = num;
   	if (i==0 or num > base){
   		continue;
   	}
   }
   cout << count << endl;
   
    return 0;
}