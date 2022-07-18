/* 
This program is question 2 of the hw assignment
*/
#include <iostream>

using namespace std;

int main() 
{
    int dollars;
    int cents;

    cout << "Please enter your amount in the format of dollars and cents separated by a space." << endl;
    cin >> dollars >> cents;

    int totalValue = (dollars * 100) + cents;
    int quarters = totalValue / 25;
    totalValue -= (quarters * 25);
    int dimes = totalValue / 10;
    totalValue -= (dimes * 10);
    int nickels = totalValue / 5;
    totalValue -= (nickels * 5);
    int pennies = totalValue;

    cout << dollars << " dollars and " << cents << " are: " << endl;
    cout << quarters << " quarters " << dimes << " dimes " << nickels << " nickels and " << pennies << " pennies.";
}
