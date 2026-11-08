#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int INF = 1e9;

int main(){
	int n, x;
	cin >> n >> x;

	vector<int> coins(n);
	vector<int> dp(x+1, INF);
	
	for(int i=0; i<n; i++){
		cin >> coins[i];
	}
	
	dp[0] = 0;
	for(int i=0; i<=x; i++){
		for(int c : coins){
			if(i+c <= x) dp[i+c] = min(dp[i+c], dp[i]+1);
		}
	}
	
	if(dp[x] != INF) cout << dp[x] << endl;
	else cout << -1 << endl;
	return 0;

}
