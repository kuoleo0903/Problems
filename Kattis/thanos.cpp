# include <iostream>
using namespace std;

int main(){
	long long lines, P, R, F, i, count=0;
	
	cin >> lines;
	for(i=0; i<lines; i++){
		cin >> P >> R >> F;
		while(F >= P){
			P *= R;
			count++;
		}
		cout << count << endl;
		count = 0;
	}
	
	return 0;
}