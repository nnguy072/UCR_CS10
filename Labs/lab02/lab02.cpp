#include <iostream>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp 
/// @brief Lab 2/Hello, You!
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 18, 2015
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
    string name;                                            // Name of Person
    int niceDays = 0;                                   // Number of "nice days"

    cout << "Good day, what is your name? ";        // Asking for Name of Person   
    cin >> name;                                    // Stores the Name of Person
    cout << endl;                                                           

    cout << "How many nice days would you like, " << name << "? ";
    cin >> niceDays;                          // Stores the number of nice days
    cout << endl;                                        // Makes a blank line
    
    niceDays *= 2;                                  // Double the nice days 
    cout << "Hi, " << name << ", have " << niceDays << " wonderful days!";           
    cout << endl;
    
    return 0;
}