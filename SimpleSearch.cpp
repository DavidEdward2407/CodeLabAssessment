/////////////////////////////////////////
/////////DAVID EDWARD ZUMERLE////////////
/////////STUDENT ID: 575808//////////////
///////COMPUTING YEAR 1 SEM 1////////////
/////////////////////////////////////////
/*Write a simple search engine that tests if a string is present in a string array. 
The array you need to declare should be initialised with the following values 
"Jake" "Zac", "Ian", "Ron", "Sam", "Dave". The string you are searching for is "Sam"

Your program should loop the array and test each array index against the search term. 
If the search term is found the program should output an appropriate message

Optional Requirements
Allow the user to enter the name to be searched*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaretion and initialization 
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    //Allow user to enter the name to be searched
    string searchName;
    cout << "Enter the name to search for: ";
    cin >> searchName;

    // Search the array
    bool found = false;
    for (int i = 0; i < 6; i++) {
        if (names[i] == searchName) {
            found = true;
            break;
        }
    }

    // Output result
    if (found == true) {
        cout << searchName << " was found in the list!" << endl;
    } else {
        cout << searchName << " was NOT found in the list." << endl;
    }

    return 0;
}
