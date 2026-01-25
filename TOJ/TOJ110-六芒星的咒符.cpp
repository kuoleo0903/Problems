#include <iostream>
using namespace std;

int main() {
   int times, high;
   cin >> times;
   for (int i=0; i<times; i++){
	cin >> high;
   	// 上面三角形
   	for (int t=0; t<high-3; t++){
		for (int j=0; j<high-t-1; j++){
			cout << " ";
		}
	   	for (int h=0; h<t*2+1; h++){
   			cout << "*";
   		}
   		cout << endl;
	}
	
   	// 中間三行
   	for (int st1=0; st1<high*2-1; st1++){
   		cout << "*";
   	}
   	cout << endl << " ";
   	for (int st2=0; st2<2*(high-2)+1; st2++){
   		cout << "*";
   	}
   	cout << endl;
   	for (int st3=0; st3<high*2-1; st3++){
   		cout << "*";
   	}
   	cout << endl;
   	
   	// 下面倒三角形
   	for (int t=high-4; t>=0; t--){
		for (int j=0; j<high-t-1; j++){
			cout << " ";
		}
	   	for (int h=0; h<t*2+1; h++){
   			cout << "*";
   		}
   		cout << endl;
   	}
   }
   
    return 0;
}