#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab7.cpp 
/// @brief Lab 7
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date February 18, 2015
//  ================== END ASSESSMENT HEADER ===============

int genRandInt(int, int);

int main ()
{
    srand(time(0));
    int smallNum, largeNum, whichExcercise;
    string headsOrTails, reDo;
    
    // asks for the excerise   
    cout << "Which excercise? ";
    cin >> whichExcercise;
    cout << endl;
    
    // excercise 1: choosing smallest/biggest from a range of num;
    if (whichExcercise == 1)
    {
        cout << "Enter the smallest possible number: ";
        cin >> smallNum;
        cout << endl;
    
        cout << "Enter the largest possible number: ";
        cin >> largeNum;
        cout << endl;
    
        for (int i = 0; i < 3; i++)
        {
            cout << "Random number: " << genRandInt(smallNum, largeNum) << endl;
        }
    }
    
    // excercise 2: flips a coin
    else if (whichExcercise == 2)
    {
        // prints heads/tails and asks if user wants to repeat
        while (reDo != "no")
        {
            smallNum = 1;
            largeNum = 2;
           
            // assigns heads to 1, else tails
            if (genRandInt(smallNum, largeNum) == 1)
            {
                headsOrTails = "heads";
            }
            else
            {
                headsOrTails = "tails";
            }
            
            // prints heads/tails, then asks if user wants to redo
            cout << "Flip: " << headsOrTails << endl;
            cout << "Toss the coin again (yes/no)? ";
            cin >> reDo;
            cout << endl;
        }
    }
    
    else
    {
        cout << "Hello?" << endl;
    }
    
    return 0;    
}

// function that generations a random number
int genRandInt (int smallNum, int largeNum)
{
    int x = 0;
    x = (rand() % (largeNum - smallNum + 1)) + smallNum;
    
    return x;
} 