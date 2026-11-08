#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int n, w;
	cin >> n >> w;
	vector<int> v(n, 0);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int pf=0, ps=n-1, gondolas=0;
	while(pf <= ps){
		if(v[pf]+v[ps] <= w){
			pf++; ps--;
			gondolas++;
		}
		else{
			ps--;
			gondolas++;
		}
	}

	cout << gondolas << endl;   
	return 0;

}