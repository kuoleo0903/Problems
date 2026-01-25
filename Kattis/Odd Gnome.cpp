#include <iostream>
using namespace std;

int a[10005];

int main() {
   int groups, gs, j;
   cin >> groups;
   for (int i=0; i<groups; i++){
   	cin >> gs;
   	for (j=0; j<gs; j++){
   		cin >> a[j];
   		if (j == 0){
   			continue;
   		}
   		if (a[j-1] != a[j]-1){
   			cout << j+1 << endl;
   			break;
   		}
   	}
   	for (int k=0; k<(gs-j-1); k++){
   		cin >> a[j];
   	}
   }
   
    return 0;
}