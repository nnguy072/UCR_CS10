//  =============== BEGIN ASSESSMENT HEADER ================
/// @file pig.cpp 
/// @brief assignment 5/ Monte Carlo Hold-At-N turn pigs
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date February 22, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int genRandInt (int numMin, int numMax)
{
    // generates random integer
    int randInt = 0;
    randInt = rand() % (numMax - numMin + 1) + numMin;
    return randInt;
}

int singleTurn (int holdValue)
{
    int turnScore = 0;
    int rollScore = 0;
    bool zero = false;
    
    do {
        // rolling dice
        rollScore = genRandInt(1,6);
        
        // rolls until score is <= hold value
        turnScore = turnScore + rollScore;
        
        // if roll is 1 then roll is 0, turn ends
        if (rollScore == 1) 
        {
            zero = true;
            break;
        }
    } while (turnScore < holdValue);
    if (zero)
    {
        turnScore = 0;
    }
    
    return turnScore; 
}
int main()
{
    srand(time(0));
    int numTurns, holdValue, turnScore;
    double estimateProb;
    
    // Value to hold at
    cout << "What value should we hold at? ";
    cin >> holdValue;
    cout << endl;
    
    // how many simulations
    cout << "Hold-at-N turn simulations? ";
    cin >> numTurns;
    cout << endl; 

    // score counter
    int hold0 = 0;
    int hold1 = 0;
    int hold2 = 0;
    int hold3 = 0;
    int hold4 = 0;
    int hold5 = 0;
    int hold6 = 0;
    
    // score values aka possible scores either 0, hold + 1...2...3...4...5...
    int score0 = 0;
    int score1 = holdValue;
    int score2 = holdValue + 1;
    int score3 = holdValue + 2;
    int score4 = holdValue + 3;
    int score5 = holdValue + 4;
    int score6 = holdValue + 5;
    
    // does a turn, then adds to the counter
    for (int i = 1; i <= numTurns; i++)
    {
        turnScore = singleTurn(holdValue);
        if (turnScore == 0)
        {
            hold0++;
        }
        else if (turnScore == score1)
        {
            hold1++;
        }
        else if (turnScore == score2)
        {
            hold2++;
        }
        else if (turnScore == score3)
        {
            hold3++;
        }
        else if (turnScore == score4)
        {
            hold4++;
        }
        else if (turnScore == score5)
        {
            hold5++;
        }
        else if (turnScore == score6)
        {
            hold6++;
        }
    }
    
    // table of score & Estimated Probability
    cout << "Score\tEstimated Probability" << endl;
    
    cout << score0 << "\t";
    estimateProb = static_cast<double> (hold0) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
    
    cout << score1 << "\t";
    estimateProb = static_cast<double> (hold1) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
    
    cout << score2 << "\t";
    estimateProb = static_cast<double> (hold2) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
    
    cout << score3 << "\t";
    estimateProb = static_cast<double> (hold3) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
    
    cout << score4 << "\t";
    estimateProb = static_cast<double> (hold4) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
    
    cout << score5 << "\t";
    estimateProb = static_cast<double> (hold5) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
    
    cout << score6 << "\t";
    estimateProb = static_cast<double> (hold6) / numTurns;
    cout << fixed << showpoint << setprecision(6) << estimateProb << endl;
}

//functions