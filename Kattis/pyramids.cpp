#include <iostream>
using namespace std;

int main() {
   int i, blocks, count=0;
   cin >> blocks;
   for (i=1; blocks>=0; i+=2){
   	blocks -= i*i;
   	count++;
   }
   
   cout << count-1 << endl;
   
    return 0;
}