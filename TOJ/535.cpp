#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a == 100){
    	cout << "S" << endl;
    }
    else if(90 <= a and a <= 99){
    	cout << "A" << endl;
    }
    else if(80 <= a and a <= 89){
    	cout << "B" << endl;
    }
    else if(70 <= a and a <= 79){
    	cout << "C" << endl;
    }
    else if(60 <= a and a <= 69){
    	cout << "D" << endl;
    }
    else{
    	cout << "F" << endl;
    }
    return 0;
}