#include <iostream>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipherMany.cpp 
/// @brief assignment 4/ Cipher many
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date Februrary 13, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
    string defaultMap = "zyxwvutsrqponmlkjihgfedcba";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string encyptionMap;
    string userInput;
    string method;
    int positionLetter = 0;
    bool wordValidator = true;
    
    // acquire the method
    cout << "What is the method (encryption or decryption)? ";
    cin >> method;
    cout << endl;
    
    if (method == "encryption")
    {
        //acquire the transition map
        cout << "What is the translation map (type 'default' to use default): ";
        cin >> encyptionMap;
        cout << endl;
    
        //check if valid map size
        if (encyptionMap == "default")
        {
            encyptionMap = defaultMap;
        }
        else if (encyptionMap.length() == 26)
        {
            encyptionMap = encyptionMap;
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
        // word is possible; begins replacing letters then printing word
        for (int i = 0; i < userInput.size(); i++)
        {
            if (userInput.at(i) < 'a' || userInput.at(i) > 'z')
            {
                wordValidator = false;
            }
        }
        if (wordValidator)
        {
            for (int i = 0; i <= userInput.size() - 1; i++)
            {
                positionLetter = userInput.at(i) - 'a'; 
                userInput.at(i) = encyptionMap.at(positionLetter);
            } 
            cout << "Encrypted word: " << userInput << endl;
        }
        
        //word is not possible; print error
        else 
        {
            cout << "Error: encryption cannot be performed." << endl;
            return 0;
        }
    }
    else if (method == "decryption")
    {
        //acquire translation map
        cout << "What is the translation map (type 'default' to use default): ";
        cin >> encyptionMap;
        cout << endl;
        
        //check if valid map size
            //check if valid map size
        if (encyptionMap == "default")
        {
            encyptionMap = defaultMap;
        }
        else if (encyptionMap.length() == 26)
        {
            encyptionMap = encyptionMap;
        }
        else 
        {
            cout << "Error: invalid translation map size." << endl;
            return 0;
        }
        
        // acquire word/check if possible
        cout << "What is the single word to translate: ";
        cin >> userInput;
        cout << endl;
    
        //check if word is possible
        // word is possible; begins replacing letters then printing word
        for (int j = 0; j < encyptionMap.size(); j++)
        {
            for (int i = 0; i < userInput.size(); i++)
            {
                if (encyptionMap.find(userInput.at(i)) == string::npos)
                {
                    wordValidator = false;
                }
            }
        }
        if (wordValidator)
        {
            for (int i = 0; i < userInput.size(); i++)
            {
                positionLetter = encyptionMap.find(userInput.at(i));
                userInput.at(i) = alphabet.at(positionLetter);
                
            }
            cout << "Decrypted word: " << userInput << endl; 
        }
        else
        {
            cout << "Error: decryption cannot be performed." << endl;
            return 0;
        }
    }
    else
    {
        cout << "Error: invalid method choice." << endl;
    }
    return 0; 
}