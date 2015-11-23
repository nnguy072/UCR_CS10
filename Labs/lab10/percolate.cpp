//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab10.cpp 
/// @brief Lab 10
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date March 12, 2015
//  ================== END ASSESSMENT HEADER ===============


//        Requires grid file as input (input redirection).
//        Grid file looks similar to:
//
//            xxxSxxxxxxxxxxxxxxx
//            x                 x
//            xxxxxxx xxxxxxxxxxx
//            x                 x
//            xxxxxxxxxxxxxxGxxxx
//
//        Spaces represent empty grid blocks.  Init in EMPTY state.
//        S represents the starting grid block(s). Init in COLOR state.
//        G represents the goal grid block. More than one can exist.
//        Any non-space (x here) is considered a wall. Init in WALL state.

#include <iostream>
#include <vector>

using namespace std;

// Provided functions
void animationPause();
void clearScreen();
void printEmpty();
void printColor();
void printWall();
void readGrid(vector <vector <int> > &, vector <vector <bool> > &);
void printGrid(const vector <vector <int> > &);
bool percComplete(const vector <vector<int> > &, const vector <vector<bool> >&);


// States for grid spots for use throughout the program
const int EMPTY = 1;
const int WALL = 2;
const int COLOR = 3;
const int TO_BE_COLORED = 4;



/// @brief percolates the fluid from grid blocks with fluid in them
/// @param grid the current grid filled with current states
void perc(vector <vector <int> > &grid)
{
    // TODO: Implement this function
    if (grid.size() == 1)
    {
        for (int c = 0; c < grid.at(0).size(); c++)
        {
            if (grid.at(0).at(c) == COLOR)
            {
                if (grid.at(0).at(c + 1) == EMPTY)
                {
                    grid.at(0).at(c + 1) = TO_BE_COLORED;
                }
            }
        }
    }
    
    /// Traverse 2D grid setting intermediate state where applicable
    else
    {
        //traverse grid through loops
        for (int r = 0; r < grid.size(); r++)
        {
            for (int c = 0; c < grid.at(r).size(); c++)
            {
                //test if colored
                if (grid.at(r).at(c) == COLOR)
                {
                    //test right side
                    if (c > 0)
                    {
                        if (grid.at(r).at(c - 1) == EMPTY)
                        {
                            grid.at(r).at(c - 1) = TO_BE_COLORED;
                        }
                    }
                
                    //test left side
                    if (c < grid.at(r).size() - 1)
                    {
                        if (grid.at(r).at(c + 1) == EMPTY)
                        {
                            grid.at(r).at(c + 1) = TO_BE_COLORED;
                        }
                    }
                
                    //test top side
                    if (r > 0)
                    {
                        if (grid.at(r - 1).at(c) == EMPTY)
                        {
                            grid.at(r - 1).at(c) = TO_BE_COLORED;
                        }
                    }
                
                    //test lower side
                    if (r < grid.size() - 1)
                    {
                        if (grid.at(r + 1).at(c) == EMPTY)
                        {
                            grid.at(r + 1).at(c) = TO_BE_COLORED;
                        }
                    }
                }
            }
        }
    }
    
    /// Traverse 2D grid converting intermediate states to color state
    for (int i = 0; i < grid.size(); i++)
    {
        for(int j = 0; j < grid.at(i).size(); j++)
        {
            if (grid.at(i).at(j) == TO_BE_COLORED)
            {
                grid.at(i).at(j) = COLOR;
            }
        }
    }
}



// DO NOT alter code in main
int main()
{
    // 2D vectors to store states of grid and whether it is a goal cell
    vector <vector <int> > grid;
    vector <vector <bool> > goals;
   
    // Read in the grid from input
    readGrid(grid, goals);

    // Print initial grid
    printGrid(grid);

    // Run the simulation
    do
    {
        // Animation
        animationPause();

        // Percolate
        perc(grid);

        // Print updated grid
        printGrid(grid);
    }while(!percComplete(grid, goals));

    return 0;
}
