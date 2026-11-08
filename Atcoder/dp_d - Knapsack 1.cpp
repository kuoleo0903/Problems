// Problem: dp_d D - Knapsack 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int N, W;
	cin >> N >> W;

	vector<long long> dp(W+1, 0);
	
	long long w, v;
	for (int i=0; i<N; i++){
		cin >> w >> v;
		for (int j=W; j>=w; j--){
			dp[j] = max(dp[j], dp[j-w]+v);
		}
	}
	
	cout << dp[W] << endl;
	
	return 0;

}
