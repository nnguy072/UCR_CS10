#include <iostream>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab4.cpp 
/// @brief Lab 4
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 27, 2015
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
    char keyStroke;
    
    // Ask user to type a single character
    cout << "Enter a character: ";
    cin >> keyStroke;
    cout << endl;
    
    // This block if capital letter
    if (keyStroke >= 'A' && keyStroke <= 'Z')
    {
        cout << "You entered an uppercase letter." << endl;
    }
    // This block if lowercase letter
    else if (keyStroke >= 'a' && keyStroke <= 'z')
    {
        cout << "You entered a lowercase letter." << endl;
    }
    // This block if numeric digit
    else if (keyStroke >= '0' && keyStroke <= '9')
    {
        cout << "You entered a numeric digit." << endl;
    }
    // This block if unknown character
    else
    {
        cout << "You entered an unknown character type." << endl;
    }

    return 0;
}