#include <iostream>
using namespace std;

int main() {
   int i, times, num;
   cin >> times;
   for (i=0; i<times; i++){
   	cin >> num;
   	if (num%2 == 0){
   		cout << num << " is even" << endl;
   	}
   	else{
   		cout << num << " is odd" << endl;
   	}
   }
   
   
    return 0;
}