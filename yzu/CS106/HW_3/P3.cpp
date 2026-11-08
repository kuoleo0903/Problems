#include <bits/stdc++.h>
using namespace std;

int main(){
    int score;
    string grade;
    cout << "Enter a score between 0 and 100: ";
    cin >> score;
    switch (score / 10){
        case 10:
            grade = "A+";
            break;
        case 9:
            grade = "A";
            break;
        case 8:
            grade = "B";
            break;
        case 7:
            grade = "C";
            break;
        case 6:
            grade = "D";
            break;
        default:
            grade = "F";
    }
    if (grade != "F" && score != 100){
        if (score % 10 <= 3) grade += "-";
        if (score % 10 >= 8) grade += "+";
    }
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}