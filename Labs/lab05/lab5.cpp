#include <iostream>
#include <string>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp 
/// @brief Lab 2
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 12, 2015
//  ================== END ASSESSMENT HEADER ===============
int main ()
{
   int ex;
   string userWord;
   int i = 0;
   bool dotCharacter = false;
   bool stopWord = false;
    
   cout << "Which excercise? ";
   cin >> ex;
   cout << endl;
    
   if (1 == ex)
   {
      //All Excercise 1 code
      cout << "Enter a word: ";
      cin >> userWord;
      cout << endl;
  
      for (i = 0; i < userWord.size(); ++i)
      if (userWord.at(i) == 'e')
      {
         userWord.at(i) = '3';
      }
      else if (userWord.at(i) == 'i')
      {
         userWord.at(i) = '1';
      }
      else if (userWord.at(i) == 'x')
      {
         userWord.at(i) = '*';
      }
         cout << "Your word transformed is " << userWord << endl;
        
      return 0;
    }
   else if (2 == ex);
   {
      //All Excercise 2 code
      cout << "Enter a word: ";
      cin >> userWord;
      cout << endl;
   
      for (i = 0; i < userWord.size() ; ++i)
      {
         if (userWord.at(i) == '.')
         {
            dotCharacter = true;
         }
         if (userWord.find("stop") != string::npos)
         {
            stopWord = true;
         }
      }
      if (dotCharacter)
      {
         cout << "The character '.' is located at index " << userWord.find('.')
            << endl;
      }
      else
      {
         cout << "The entry does not contain the character '.'" << endl;
      }
      if (stopWord)
      {
         cout << "The word \"stop\" starts at index " << userWord.find("stop")
            << endl;
      }
      else
      {
         cout << "The entry does not contain the word \"stop\"" << endl;
      }
        
    }
    return 0;
}