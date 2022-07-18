/* 
This program is question 1 of the hw assignment
*/
#include <iostream>

using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    cout << "Please enter number of coins: " << endl;
    cout << "# of Quarters: " << endl;
    cin >> quarters;
    cout << "# of Dimes: " << endl;
    cin >> dimes;
    cout << "# of Nickels: " << endl;
    cin >> nickels;
    cout << "# of Pennies: " << endl;
    cin >> pennies;

    int totalValue = (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies);
    int totalDollars = totalValue / 100;
    int totalCents = totalValue % 100;

    cout << "The total is " << totalDollars << " Dollars and " << totalCents << " cents.";

}