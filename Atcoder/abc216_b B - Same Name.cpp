#include <iostream>
#include <vector>
using namespace std;

vector<string> n;

int main() {
	int times;
	cin >> times;
	cin.ignore();
	for (int i=0; i<times; i++){
		string name;
		bool judge = false;
		getline(cin, name);
		for (string x : n){
			if (name == x){
				judge = true;
			}
		}
		if(judge){
			cout << "Yes" << endl;
			return 0;
		}
		else{
			n.push_back(name);
		}
	}
	cout << "No" << endl;
    return 0;
}