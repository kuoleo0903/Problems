#include <iostream>
using namespace std;

int main(){
    int n, p, x, y;
    cin >> n >> p >> x >> y;
    cout << (p/(n-1))*(x*(n-1)+y)+(p%(n-1)*x) <<endl;
    return 0;
}