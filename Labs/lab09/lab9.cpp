//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab9.cpp 
/// @brief Lab 9
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date March 5, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector <double> &);
double average(const vector <double> &);

int main()
{
    return 0;
}

// fills in vector
void fillVector(vector <double> &v)
{
    double d;
    while (cin >> d)
    {
        v.push_back(d);
    }
}

// finds average of vectors
double average(const vector <double> &v)
{
    double sum = 0.;
    for (int i = 0; i < v.size(); i++)
    {
        
        sum += v.at(i);
    }

    return sum / v.size();
}

double standardDeviation(const vector <double> &v) {
    double topPart = 0;
    
    // "n" in the equation
    double inverse = 1.0 / static_cast<double>(v.size());
    // accumulates the sum of the top part of the eq
    for(int i = 0; i < v.size(); ++i) 
    {
        topPart += pow(static_cast<double>(v.at(i)) - average(v), 2);
        //for each value, subtract the average and square the result
    }
    return sqrt(inverse * topPart);
    //returns the standard deviation
}