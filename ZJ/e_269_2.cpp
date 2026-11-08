#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();

    for(int i=0; i<t; i++){
        string line;
        cout << "Case #" << i+1 << ":" << endl;
        while(getline(cin, line)){
            if (line.empty()) break;
            stringstream ss(line);
            string word;
            int counter = 1;
            while(ss >> word){
                if (counter <= word.size()){
                    cout << word[counter-1];
                    counter++;
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}