#include <iostream>
#include <string>
using namespace std;

string sign[] = {"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", 
				"Gemini", "Cancer", "Leo", "Virgo", 
				"Libra", "Scorpio", "Sagittarius", "Capricorn"};

string month[] = {"Jan", "Feb", "Mar", "Apr", 
					"May", "Jun", "Jul", "Aug", 
					"Sep", "Oct", "Nov", "Dec"};
					
int date_range[] = {0, 120, 219, 320, 420, 
			520, 621, 722, 822, 
            921, 1022, 1122, 1221, 9999};

int str_to_month(string& s){
	for (int i=0; i<12; i++){
		if (s == month[i]){
			return i;
		}
	}
	return -1;
}

int main() {
    int day, times;
    cin >> times;
    string str_mon;
    
    for(int j=0; j<times; j++){
	    cin >> day >> str_mon;
	    
	    int date = str_to_month(str_mon)*100 + day;
	    int k;
	    for (k=0; date>date_range[k]; k++);
	    cout << sign[k-1] << endl;
    }
    return 0;
}