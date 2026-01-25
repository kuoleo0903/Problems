#include <iostream>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n;
    a = 1;
    b = 1;
    if(n%2 == 0){
    	a = a + n/2;
    	b = b + n/2;
    }
    else{
    	a = a + n/2;
    	b = b + n/2+1;
    }
    cout << a*b << endl;
    return 0;
}