/* 
This program is question 3 of the hw assignment
*/
#include <iostream>

using namespace std;

int main() 
{
    int johnDays, johnHours, johnMinutes;
    int billDays, billHours, billMinutes;

    cout << "Enter the number of days John worked: ";
    cin >> johnDays;
    cout << "Enter the number of hours John worked: ";
    cin >> johnHours;
    cout << "Enter the number of minutes John worked: ";
    cin >> johnMinutes;

    cout << "Enter the number of days Bill worked: ";
    cin >> billDays;
    cout << "Enter the number of hours Bill worked: ";
    cin >> billHours;
    cout << "Enter the number of minutes Bill worked: ";
    cin >> billMinutes;

    int totalMinutes = (johnDays * 24 * 60) + (billDays * 24 * 60) 
     + (johnHours * 60) + (billHours * 60) + johnMinutes + billMinutes;
    
    int totalDays = totalMinutes / (60 * 24);
    totalMinutes -= totalDays * 60 * 24;
    int totalHours = totalMinutes / 60;
    totalMinutes -= totalHours * 60;

    cout << "The total time both of them worked is: " << totalDays << " days, " <<
     totalHours << " hours, and " << totalMinutes << " minutes";
}