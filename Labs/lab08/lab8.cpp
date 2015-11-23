//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab8.cpp 
/// @brief Lab 8
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date February 26, 2015
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>

using namespace std;

const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;

int main()
{
    return 0;
}
/// @brief acquire the proper number of numeric inputs based on operation string
/// The numeric inputs are set into x, y, and z in that order;
/// the number of numeric inputs acquired is returned to the caller.
/// Not all operations require all three values: 
/// do not set operands that are not needed.
///
/// @param op the operation to be performed such as "division"
/// @param x the first numeric input
/// @param y the second numeric input
/// @param z the third numeric input
/// @return the number of numeric inputs that were acquired
int acquireOperands(const string &op, double &x, double &y, double &z)
{
    int numUserInputs;
    
    if (op == "division" || op == "pythagorean")
    {
        cout << "Enter your first number: ";
        cin >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin >> y;
        cout << endl;
        
        numUserInputs = 2;
        return numUserInputs;
    }
    else if (op == "quadratic")
    {
        cout << "Enter your first number: ";
        cin >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin >> y;
        cout << endl;
        cout << "Enter your third number: ";
        cin >> z;
        cout << endl;
        
        numUserInputs = 3;
    }
    return numUserInputs;
}
    
/// @brief calculate quotient for provided values (a/b); returns error code
///
/// @param a the dividend of the equation
/// @param b the divisor of the equation
/// @param result reference to place the quotient in
/// @return returns the integer representing the state of the calculation
/// using global constants for OK and DIV_ZERO
int division(double a, double b, double &result)
{
    int answer;
    
    if (b == 0.0)
    {
        return DIV_ZERO;
    }
    else
    {
        answer = a / b;
    }
    
    return answer;
}
/// @brief calculate the roots to the quadratic formula for a polynomial of
/// the form a*x^2 + b*x + c = 0; returns error code when necessary.
///
/// @param a the coefficient of x^2 in the polynomial equation
/// @param b the coefficient of x in the polynomial equation
/// @param c the last value of the polynomial equation
/// @param root1 reference for the first root of the quadratic formula
/// @param root2 reference for the second root of the quadratic formula
/// @return returns the integer representing the state of the calculation
/// using global constants for OK, DIV_ZERO, and SQRT_ERR
int quadratic(double a, double b, double c, double &root1, double &root2)
{
    if(pow(b, 2) - (4 * a * c) >= 0.0)
    {
        root1 = (-b - sqrt(pow(b,2) - (4 * a * c)) / (2 * a));
        
        root2 = (-b + sqrt(pow(b,2) - ( 4 * a * c)) / ( 2 * a));
    }
    else 
    {
        return SQRT_ERR;
    }
    
    return 0;
}
/// @brief calculate c for the pythagorean theorem a^2 + b^2 = c^2
///
/// @param a the value of a in the equation
/// @param b the value of b in the equation
/// @param c reference for the hypotenuse value
/// @return returns the integer representing the state of the calculation
/// using global constant for OK 
int pythagorean(double a, double b, double &c)
{
    // FIXME:
    cout << "pythagorean" << endl;
    
    return 0;
}