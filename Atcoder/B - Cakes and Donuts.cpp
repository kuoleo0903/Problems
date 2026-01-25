#include <iostream>
using namespace std;

int main() {
   int N, i, j;
   bool found = false;
   cin >> N;
   for (i=0; i<40; i++){
   	for (j=0; j<14; j++){
   		if (N == i*4 + j*7){
   			cout << "Yes" << endl;
   			found = true;
   			break;
   		}
   	}
   	if (found) {
   		break;
   	}
   }
   if (!found) {
   	cout << "No" << endl;
   }
   return 0;
}