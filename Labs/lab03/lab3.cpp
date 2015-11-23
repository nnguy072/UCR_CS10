#include <iostream>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab3.cpp 
/// @brief Lab 3//Cash Register
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 21, 2015
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
   const int quarter = 25;
   const int dime = 10;
   const int nickel = 5;
   double purchaseAmount;
   double amountReceived;
   double totalChange;
   int changeInPennies, dollars, quarters, dimes, nickels, pennies;
   int remainderAfter;

   //How much did the thing cost?
   cout << "Enter purchase amount: ";
   cin >> purchaseAmount;
   cout << endl;
    
   //How much did they pay?
   cout << "Enter amount received: ";
   cin >> amountReceived;
   cout << endl;
    
   //Total Change
   totalChange = amountReceived - purchaseAmount;
   cout << "Total Change: $" << totalChange << endl;
   cout << endl;
   //convert change to pennies
   changeInPennies = totalChange * 100 + .5;
    
   //Total Change in dollars/coins
   dollars = changeInPennies / 100 + .5;
   remainderAfter = changeInPennies % 100 + .5;
   quarters = remainderAfter / 25 + .5;
   remainderAfter = remainderAfter - (quarters * quarter);
   dimes = remainderAfter / 10 + .5;
   remainderAfter = remainderAfter - (dimes * dime);
   nickels = remainderAfter / 5 + .5;
   remainderAfter = remainderAfter - (nickels * nickel);
   pennies = remainderAfter / 1 + .5;
   
   //Displaying the Change
   cout << "dollars " << dollars << endl;
   cout << "quarters " << quarters << endl;
   cout << "dimes " << dimes << endl;
   cout << "nickels " << nickels << endl;
   cout << "pennies " << pennies << endl;
    
   return 0;
}