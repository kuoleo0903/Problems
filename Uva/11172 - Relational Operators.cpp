#include <iostream>
using namespace std;

int main() {
   int times, i, a, b;
   cin >> times;
   for (i=0; i<times; i++){
   	cin >> a >> b;
   	if (a > b){
   		cout << ">" << endl;
   	}
   	else if (a == b){
   		cout << "=" << endl;
   	}
   	else {
   		cout << "<" << endl;
   	}
   }
    return 0;
}