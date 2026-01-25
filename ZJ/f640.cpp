#include <bits/stdc++.h>
using namespace std;

int f(int x){
    return 2*x - 3;
}
int g(int x, int y){
    return 2*x + y - 7;
}
int h(int x, int y, int z){
    return 3*x - 2*y + z;
}

int eval(vector<string> & s, int & i){
    string t = s[i];
    i++;

    if (t == "f"){
        int x = eval(s, i);
        return f(x);
    }
    else if (t == "g"){
        int x = eval(s, i);
        int y = eval(s, i);
        return g(x, y);
    }
    else if (t == "h"){
        int x = eval(s, i);
        int y = eval(s, i);
        int z = eval(s, i);
        return h(x, y, z);
    }
    else return stoi(t);

}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    vector<string> s;
    string n;
    while(cin >> n) s.push_back(n);

    int id = 0;
    cout << eval(s, id) << endl;
    

    return 0;
}