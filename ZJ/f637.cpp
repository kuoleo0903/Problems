#include <bits/stdc++.h>
using namespace std;

int count(queue<int> q, int edge){
    if (q.front() == 0){
        q.pop();
        return 0;
    }
    else if (q.front() == 2){
        q.pop();
        return count(q, edge/2);
    }
    else{ //q.front() == 1
        q.pop();
        return edge*edge;
    }
}


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    string s;
    int edge;
    cin >> s >> edge;

    queue<int> q;
    for(auto &c:s){
        q.push(c);
    }
    cout << count(q, edge) << endl;

    return 0;
}