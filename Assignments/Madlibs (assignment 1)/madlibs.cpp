#include <iostream>
using namespace std;
//  =============== BEGIN ASSESSMENT HEADER ================
/// @file madlibs.cpp 
/// @brief assignment 01/madlibs/"The Haunted House"/spOooOOoky
///
/// @author Nam Nguyen [nnguy072@ucr.edu]
/// @date January 12, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

int main ()
{
    string measuringStick (80, '-');     //Used to measure 80 characters
    string dayOfWeek;
    string person1;
    string person2;
    string namePet;
    string typeOfPet;
    string numDays;
    string monsterName;
    string typeOfMonster;
    string adjective;
    string houseHoldItem;
    
    cout << "Fill in the blanks." << endl;
    cout << "Day of Week: ";
    cin >> dayOfWeek;
    cout << endl;
    cout << "Boy Name: ";
    cin >> person1;
    cout << endl;
    cout << "Girl Name: ";
    cin >> person2;
    cout << endl;
    cout << "Pet Name: ";
    cin >> namePet;
    cout << endl;
    cout << "Monster Name: ";
    cin >> monsterName;
    cout << endl;
    cout << "Animal: ";
    cin >> typeOfPet;
    cout << endl;
    cout << "Number: ";
    cin >> numDays;
    cout << endl;
    cout << "Monster: ";
    cin >> typeOfMonster;
    cout << endl;
    cout << "Adjective: ";
    cin >> adjective;
    cout << endl;
    cout << "Item commonly found in a house: ";
    cin >> houseHoldItem;
    cout << endl;
    
    cout << measuringStick << endl;
    //first paragraph
    cout << "   The Haunted House is spooky. " << "Legend has it on ";
    cout << dayOfWeek << " night things happen " << endl;
    cout << "there." << " One day, " << person1 << " moved in with " << person2;
    cout << " and their pet, " << namePet << "." << endl;
    cout << namePet << " was a " << typeOfPet << ".";
    cout << " The three shared one room. Things were fine until " << endl;
    cout << dayOfWeek << " night." << " That night, the power went out and "; 
    cout << namePet << " had disappeared."  << endl;
    cout << person1 << " and " << person2; 
    cout << " did not think too much of it, since this was not the" << endl;
    cout << "first time " << namePet; 
    cout << " had ventured on its own and gone missing." << endl;
    cout << "\n"; 
    
    //second paragraph
    cout <<"    " << numDays <<" days went by and still no signs of ";
    cout << namePet << ". " << "This worried " << endl;
    cout << person1 << " and " << person2; 
    cout << " because it would usually come back within a day. " << "It "; 
    cout << endl;
    cout << "was " << dayOfWeek << " night again. "; 
    cout << "They heard scratching and knocking outside the door. " << endl;
    cout << "They thought it was " << namePet; 
    cout << ", but when they went to check; nothing was there." << endl; 
    cout << "Later that night, they heard more noises. "; 
    cout << "However this time, it was from their" << endl;
    cout << "closet. " << "When " << person2 << " went to check. " << person1; 
    cout << " had disappeared right after." << endl;
    cout << "The only thing " << person2; 
    cout << " could see were writing on the wall." << " The writing read: "; 
    cout << endl;
    cout << monsterName << ", the " << typeOfMonster << ". " << person2;
    cout << " was spooked. " << "So she did what any" << endl;
    cout << adjective << " would do. ";
    cout << "She decided to continue to stay in the house." << endl;
    cout << "\n";
    
    //third paragraph
    cout << "   The next " << dayOfWeek << " came. " << person2;
    cout << " armed herself with what she could find." << endl;
    cout << "That so happens to only be a " << houseHoldItem << ". "; 
    cout << "Like the other " << dayOfWeek << "s" << ", " << monsterName;
    cout << endl;
    cout << "came. " << "However, this time " << person2;
    cout << " was armed with her " << houseHoldItem << ". " << "She battled ";
    cout << endl; 
    cout << "with the " << typeOfMonster << ". " << "Like all tragic stories, ";
    cout << person2 << " fought and failed." << endl;
    cout << monsterName << " ate her, because she was only armed with a(n) ";
    cout << houseHoldItem << ". " << "The worst " << endl;
    cout << "part is that no one will know what happened to them." << endl;
    cout << "\n";
    
    cout << measuringStick << endl;
    
    return 0;
}