//  =============== BEGIN ASSESSMENT HEADER ================
/// @file filename.cpp 
/// @brief assignment 7/ Monte Carlo: Board Game
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date March 8, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

int rollNDice (int numDice, int numSides);
int mostLandings (const vector<int> &board, int startIntv, int endIntv);
void printBoard (const vector<int> &board, int numSides, int numCells);

int main () 
{
    srand(time(0)); // change to time(0) when turning into r'sub
    int numSides, numCells, numSim;
    int numDie = 2;
    int diceSides = 6;
    vector<int> board;
    
    // prompt user for board configuration: num sides, num cells per sides
    cout << "How many sides of the board are there? ";
    cin >> numSides;
    cout << endl;
    cout << "How many spots are on each side? ";
    cin >> numCells;
    cout << endl;
    
    // prompt user for number of Simulations to run
    cout << "How many simulations? ";
    cin >> numSim;
    cout << endl;

    int maxSpace = numSides * numCells;
    board.resize(maxSpace);
    
    //creates the board .at(0) is first spot, .at(maxSpace) = last spot
    for (int i = 0; i < maxSpace; i++)
    {
        board.at(i) = 0;
    }
    
    //rolls the dice, if n then n will increase by 1 in the vector
    for (int i = 0; i < numSim; i++)
    {
        int roll = 0;
        int rollTotal = 0;
        while (rollTotal < maxSpace)
        {
            roll = rollNDice(numDie, diceSides);
            rollTotal += roll;
            if (rollTotal <= maxSpace)
            {
                board.at(rollTotal - 1) += 1;
            }
            else
            {
                break;
            }
        }
    }
    
    // prints the which spot has the most landing in a certain interval
    cout << "The following spots on each side have the most landings: " << endl;
    for (int i = 1; i <= numSides; i++)
    {
        int startIntv = 1 + ((i - 1) * numCells) - 1;
        int endIntv = i * numCells - 1;
        int spotLocation = mostLandings(board, startIntv, endIntv) + 1;
        cout << "On side " << i << ", spot " << spotLocation
            << " has the most landings: " 
            << board.at(mostLandings(board, startIntv, endIntv)) << endl;
    }
    
    return 0;
}

// functions

// rollNDice
// @brief Simulates a dice roll
// @param number of dice rolls, number of sides on a dice
// @return number that was rolled
int rollNDice (int numDice, int numSides)
{
    int roll = 0;
    int sum = 0;
    //numDice = number of dice; does one roll then adds to accumulator
    for (int i = 1; i <= numDice; i++)
    {
        roll = (rand() % (numSides)) + 1;
        sum += roll;
    }
    return sum;
}

// most landing function
// @brief gives the most landing cell in a closed interval
// @param vector, the board, start interval, end interveral
// @return cell that hasd the most chance of landing on
int mostLandings (const vector <int> &board, int startIntv, int endIntv)
{
    int maxVal = board.at(0);  
    int location = startIntv;
    for (int i = startIntv; i <= endIntv; i++)
    {
        if (board.at(i) > maxVal)
        {
            maxVal = board.at(i);
            location = i;
        }
    }
    return location;
}

// printBoard function
// @brief makes the board for the game
// @param vector (cells of the game)
// @return void
/*
void printBoard (const vector<int> &board, int numSides, int numCells)
{
    // prints the board, shows the number of landing on each cell
    for (int i = 0; i < (numSides * numCells); i++)
    {
        cout << board.at(i) << " ";
    }
    cout << endl;
    return;
}
*/