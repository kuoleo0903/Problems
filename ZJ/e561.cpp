#include <iostream>
using namespace std;

int num[60];

int main() {
    int n, l;
    cin >> n; // 輸入筆數
    for (int i=0; i<n; i++){
        int cnt=0;
        cin >> l; // 每筆測資輸入字數
        for (int t=0; t<l; t++){
            cin >> num[t];
        }

        for (int j=0; j<l; j++){ // 泡泡搜尋
            int temp=0;
            for (int k=0; k<l-1; k++){
                if (num[k] > num[k+1]){
                    temp = num[k];
                    num[k] = num[k+1];
                    num[k+1] = temp;
                    cnt++;

                    // cout << cnt << endl;
                    // for (int m=0; m<l; m++){
                        // cout << num[m] << " ";
                    // }
                    // cout << endl;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
    }    
    return 0;
}