/* 
This program is question 4 of the hw assignment
*/
#include <iostream>

using namespace std;

int main() 
{
    int firstNum;
    int secondNum;

    cout << "Enter two positive integers separated by a space: " << endl;
    cin >> firstNum >> secondNum;

    cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
    cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << endl;
    cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << endl;
    cout << firstNum << " / " << secondNum << " = " << (double)firstNum / secondNum << endl;
    cout << firstNum << " div " << secondNum << " = " << firstNum / secondNum << endl;
    cout << firstNum << " mod " << secondNum << " = " << firstNum % secondNum << endl;
}