#include <iostream>
using namespace std;

int main() {
   int num, i;
   cin >> num;
   for (i=0; num != 0; i++){
   	num /= 10;
   }
   cout << i << endl;
   
    return 0;
}