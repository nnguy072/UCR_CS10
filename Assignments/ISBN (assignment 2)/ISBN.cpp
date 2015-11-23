#include <iostream>
#include <cmath>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment3.cpp 
/// @brief assignment 3/ ISBN
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 24, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
    int numISBN;
    int checkSum, weightedSum;
    int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixDigit;
    int seventhDigit, eighthDigit, ninthDigit;
    
    // User inputs first 9 digit of ISBN
    cout << "Please enter the first 9 digits of the ISBN: ";
    cin >> numISBN;
    cout << endl;
    
    // Isolating each digit
    ninthDigit = numISBN % 10;
    eighthDigit = (numISBN % 100) / 10;
    seventhDigit = (numISBN % 1000) / 100;
    sixDigit = (numISBN % 10000) / 1000;
    fifthDigit = (numISBN % 100000) / 10000;
    fourthDigit = (numISBN % 1000000) / 100000;
    thirdDigit = (numISBN % 10000000) / 1000000;
    secondDigit = (numISBN % 100000000) / 10000000;
    firstDigit = numISBN / 100000000;
    
    // find weighted sum
    weightedSum = (1 * firstDigit ) + (2 * secondDigit) + (3 * thirdDigit) + 
        (4 * fourthDigit) + (5 * fifthDigit) + (6 * sixDigit) +
        (7 * seventhDigit) + (8 * eighthDigit) + (9 * ninthDigit);
    
    // Remainder of weighted sum after divided by 11 (checksum)
    checkSum = weightedSum % 11;
    
    // Take checksum and output value from 0 through 10
    cout << "Checksum: " << checkSum << endl;
   
    return 0;
}