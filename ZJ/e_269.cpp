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
            
            int counter = 1;
            int word_count = 1;
            bool read = 0;
            for(int j=0; j<line.size(); j++){
                if (line[j] == ' '){
                    word_count = 1;
                    read = 0;
                    continue;
                }
                if (counter == word_count && !read){
                    cout << line[j];
                    word_count = 1;
                    counter++;
                    read = 1;
                }
                word_count++;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}