#include <bits/stdc++.h>
using namespace std;

int a[10][10] = {0};
vector<int> v;

void spin(int & r, int & c){
    for (int j=c-1; j>=0; j--){
        for(int i=0; i<r; i++){
            v.push_back(a[i][j]);
		}
	}

    swap(r, c);
    int cnt = 0;
    for (int i=0; i<r; i++){
		for(int j=0; j<c; j++){
            a[i][j] = v[cnt];
            cnt++;
		}
	}
    v.clear();
}
void mirror(int r, int c){
	if (r%2 == 1) r--;
	for (int i=0; i<r/2; i++){
		for(int j=0; j<c; j++){
			swap(a[i][j], a[r-i][j]);
		}
	}
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int r, c, m;
	cin >> r >> c >> m;
	
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			cin >> a[i][j];
		}
	}
	
	vector<int> op;
    int tmp;
    for (int i=0; i<m; i++){
        cin >> tmp;
        op.push_back(tmp);
    }
    op.reserve(size(op));
	for (auto s : op){
		if (s) mirror(r, c);
		else spin(r, c);
	}
	

    cout << r << " " << c << endl;
	for (int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << a[i][j];
            if (j != c-1) cout << " ";
		}
        cout << endl;
	}
	return 0;
}