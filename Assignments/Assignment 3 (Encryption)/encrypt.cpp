#include <iostream>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipher.cpp 
/// @brief assignment 4/ Cipher
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 29, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
    string notDefaultMap;
    string userInput;
    string encyptedWord;
    
    //acquire the transition map
    cout << "What is the translation map (type 'default' to use default): ";
    cin >> notDefaultMap;
    cout << endl;
    
    //check if valid map size
    if (notDefaultMap == "default")
    {
        notDefaultMap = "zyxwvutsrqponmlkjihgfedcba";
    }
    else if (notDefaultMap.length() == 26)
    {
        notDefaultMap = notDefaultMap;   
    }
    else 
    {
        cout << "Error: invalid translation map size." << endl;
        return 0;
    }
    //acquire word
    cout << "What is the single word to translate: ";
    cin >> userInput;
    cout << endl;
    
    //check if word is possible
    if (userInput.at(0) >= 'a' && userInput.at(0) <= 'z')
    {
        int positionLetter = userInput.at(0)-'a';
        userInput.at(0) = notDefaultMap.at(positionLetter);
        encyptedWord = userInput;
    }
    else 
    {
        cout << "Error: encryption cannot be performed." << endl;
        return 0;
    }
    //print encypted word
    cout << "Encrypted word: " << encyptedWord << endl;
    
    return 0; 
}
