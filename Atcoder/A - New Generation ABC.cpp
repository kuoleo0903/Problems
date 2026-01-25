#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(1 <= a and a <= 125){
    	cout << "4" << endl;
    }
    else if(126 <= a and a <= 211){
    	cout << "6" << endl;
    }
    else{
    	cout << "8" << endl;
    }
    return 0;
}