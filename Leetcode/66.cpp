#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int tmp=0;
        vector<int> rv(0);
        digits.back()++;
        tmp = *(digits.end() - 1) / 10;
        rv.push_back(*(digits.end() - 1) % 10);
        for(auto it = digits.end()-2; it>=digits.begin(); it--){
            *it += tmp;
            tmp = *it/10;
            rv.push_back(*it % 10);
        }
        if (tmp > 0) rv.push_back(tmp);
        
        reverse(rv.begin(), rv.end());
        return rv;
    }
};