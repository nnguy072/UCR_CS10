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
#include <string>
#include <cmath>

using namespace std;

const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;

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
    
    if (op == "division")
    {
        cout << "Enter your first number: ";
        cin >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin >> y;
        cout << endl;
        
        numUserInputs = 2;
    }
    else if (op == "pythagorean")
    {
        cout << "Enter your first number: ";
        cin >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin >> y;
        cout << endl;
        
        numUserInputs = 2;
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
    else
    {
        cout << "Error: Operaton not supported." << endl;
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
    if (b == 0.0)
    {
        return DIV_ZERO;
    }
    else
    {
        result = (a / b);
    }
    
    return OK;
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
    if (a == 0)
    {
        return DIV_ZERO;
    }
    else if (pow(b, 2) - (4 * a * c) >= 0.0)
    {
        root1 = (-b - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
        
        root2 = (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
        
        return OK;
    }
    else
    {
        return SQRT_ERR;
    }
    return OK;
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
    c = sqrt((pow(a,2)) + (pow(b,2)));
    
    return OK;
}

int main()
{
    double x , y, z, root1, root2;
    string operation;
    
    // asks user for operation
    cout << "Please choose an operation: ";
    cin >> operation;
    cout << endl;
    
    // acquires how many inputs to use
    while (operation != "quadratic" && operation != "division" && 
        operation != "pythagorean")
    {
        cout << "Error: Operation not supported." << endl;
        cout << "Please choose an operation: ";
        cin >> operation;
        cout << endl;
    }
    acquireOperands(operation, x, y, z);
        
    // do operation
    if (operation == "quadratic")
    {
        cout << "Equation: " << x << "x^2 + " << y << "x + " << z << " = 0"
            << endl;
        if (quadratic(x, y, z, root1, root2) == DIV_ZERO)
        {
            cout << "Error: Cannot divide by zero." << endl;
        }
        if (quadratic(x, y, z, root1, root2) == SQRT_ERR)
        {
            cout << "Error: Cannot take square root of a negative number."
                << endl;
        }
        if (quadratic(x, y, z, root1, root2) == OK)
        {
            if (root1 == root2)
            {
                cout << "Result: " << root1 << endl;
            }
            else
            {
                cout << "Result: " << root1 << ", " << root2 << endl;
            }
        }
    }
    
    if (operation == "division")
    {
        cout << "Equation: " << x << " / " << y << endl;
        if (division(x, y, z) == OK)
        {
            cout << "Result: " << z << endl; 
        }
        if (division(x, y, z) == DIV_ZERO)
        {
            cout << "Error: Cannot divide by zero." << endl;
        }
    }
    
    if (operation == "pythagorean")
    {
        if (pythagorean(x, y, z) == OK)
        {
            cout << "Equation: sqrt(" << x << "^2 + " << y 
                << "^2)" << endl; 
            cout << "Result: " << z << endl;
        }
    }
    return 0;
}