#include <iostream>
using namespace std;

int main(){
    int p, q, M;
    cin >> p >> q;
    M = p*6;
    if(q > M or q < p){
    	cout << "No" << endl;
    }
    else{
    	cout << "Yes" << endl;
    }
    return 0;
}