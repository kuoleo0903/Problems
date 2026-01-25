#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    if(m < n){
    	cout << m << " " << n <<endl;
    }
    else{
    	cout << n << " " << m <<endl;
    }
    return 0;
}