#include <iostream>
using namespace std;

int main(){
    int n, x, y, z;
    cin >> n;
    x = n / 100;		//鏡子百位
    y = n / 10 % 10;	//鏡子十位
    z = n % 10;			//鏡子個位

    if (z == 0 and y == 0) {
        cout << x;
    }
    else if(z == 0){
    	cout << y << x;	
    }
    else{
    	cout<< z << y << x;
    }
    cout << endl;
    return 0;
}