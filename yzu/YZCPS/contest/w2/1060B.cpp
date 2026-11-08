#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int length = to_string(abs(n)).length();
    long long a=1;
    for (int i=1; i<length; i++) a *= 10;
    a--;
    n -= a;
    int final = 0;
    for(int i=0; i<length; i++){
        final += a%10 + n%10;
        a/=10;
        n/=10;
    }
    cout << final << endl;
    
    return 0;
}