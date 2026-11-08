#include <bits/stdc++.h>
using namespace std;

int main(){
    int oper;
    double num1, num2;
    cout << "Menu: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Select one of the operations (1, 2, 3, 4): ";
    cin >> oper;
    if (oper < 1 || oper > 4){
        cout << "Wrong operation! The program terminates.";
        return 0;
    }
    cout << "Enter the value of the first number: ";
    cin >> num1;
    cout << "Enter the value of the second number: ";
    cin >> num2;
    if (oper == 4 && num2 == 0){
        cout << "Error division by zero. The program terminates.";
        return 0;
    }
    switch (oper){
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
    }
    return 0;
}