#include <iostream>
#include <string>
using namespace std;

int main() {
    string street_no, street_name, city, state, zip_code;

    cout << "Enter your street No: ";
    cin >> street_no;
    
    cout << "Enter your street Name: ";
    cin >> street_name;
    
    cout << "Enter your city: ";
    cin >> city;
    
    cout << "Enter your state: ";
    cin >> state;
    
    cout << "Enter your zip code: ";
    cin >> zip_code;

    cout << "Your address is: " << street_no << " " << street_name << ", " << city << ", " << state << " " << zip_code << endl;

    return 0;
}