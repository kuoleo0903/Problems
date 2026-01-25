#include <iostream>
#include <algorithm>
using namespace std;

int total[50005], fulcrum[50005], num[50005];

int find(int n, int k) {
	int temp[k+3], index, local[k+3];
	for (int i=0; i<k; i++){
		for (int j=1; j<n; j++){ //支點
			for (int m=0; m<n; m++){ //槓桿後總和
				total[j] += num[m] * (j-m);
			}
			fulcrum[j] = fulcrum[j-1] + j;
		}

		for(index=0; index<n; index++){
			temp[i] = min(total[index]/fulcrum[index], temp[i]);
		}
		local[i] = index;
	}
}

int main() {
	int n, k, in = 0;
	cin >> n >> k;
	while(cin >> num[in]){
		in++;
	}

	find(n, k);

	if(!((index > 3 or n - index > 3) and i<k)){
		break;
	}

	return 0;
}