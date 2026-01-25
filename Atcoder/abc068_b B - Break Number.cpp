#include <iostream>
using namespace std;

int main() {
   int N, num=2;
   cin >> N;
   if (N == 1){
   	cout << N << endl;
   	return 0;
   }
   
   while(num<=N){
   	num*=2;
   }
   cout << num/2 << endl;
    return 0;
}