#include <iostream>
#include <string>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab6.cpp 
/// @brief Lab 6
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date February 11, 2015
//  ================== END ASSESSMENT HEADER ===============
int main()
{
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;
    int grades = 0;
    
    // Tells user to input grades, or -1 to stop
    cout << "Enter one or more grades, or -1 to stop: " << endl;
    do 
    {
        cin >> grades;
        
        if (grades >= 90 && grades <= 100)
        {
            countA++;
        }
        else if(grades >= 80 && grades < 90)
        {
            countB++;
        }
        else if(grades >= 70 && grades < 80)
        {
            countC++;
        }
        else if(grades >= 60 && grades < 70)
        {
            countD++;
        }
        else if(grades >=0 && grades < 60)
        {
            countF++;
        }
    } while (grades != -1);          // counting the A's,B's,C's,D's,F's
        
    // print the grades break down
    cout << "The grades breakdown is: " << endl;
    cout << "As: " << countA << endl;
    cout << "Bs: " << countB << endl;
    cout << "Cs: " << countC << endl;
    cout << "Ds: " << countD << endl;
    cout << "Fs: " << countF << endl;
    
    
    return 0;
}