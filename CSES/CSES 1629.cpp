#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<pair<int, int>> v;
	v.resize(n);
	
	for(auto &i : v) cin >> i.second >> i.first;
	
	sort(v.begin(), v.end());
	
	int cnt=0, lastend=-999;
	for(auto i : v){
		if (i.second >= lastend){
		cnt++;
		lastend =  i.first;
		}
	}
	
	cout << cnt << endl;
    
    return 0;

}
