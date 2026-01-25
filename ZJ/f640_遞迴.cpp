#include <bits/stdc++.h>
using namespace std;

int f();
int g();
int h();

int eval(){
    string s;
    cin >> s;
    if (s == "f")
        return f();
    else if (s == "g")
        return g();
    else if (s == "h")
        return h();
    else return stoi(s);
}

int f(){
    int x = eval();
    return 2*x - 3;
}

int g(){
    int x = eval();
    int y = eval();
    return 2*x + y - 7;
}

int h(){
    int x = eval();
    int y = eval();
    int z = eval();
    return 3*x - 2*y  + z;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    cout << eval() << endl;

    return 0;
}