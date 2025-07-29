/////////////////////////////////////////
/////////DAVID EDWARD ZUMERLE////////////
/////////STUDENT ID: 575808//////////////
///////COMPUTING YEAR 1 SEM 1////////////
/////////////////////////////////////////
/*You are an inexperienced hacker trying to find the correct password to enter a safe...

Write a programme that defines the correct password as 12345, and allows users to enter password attempts until 
they reach the correct answer.
Your programme should use a while loop to allow the user to keep entering password attempts until correct. 
Once the correct password is entered the program should output an appropriate message e.g "Welcome to the Secure Area"
Optional Requirements
Modify the solution to Brute-Force Attack to include a maximum of 5 password attempts. 
Each time the user enters an incorrect password, they should be told how many password attempts remain. 
If there are 5 failed password attempts the while loop should end and the program should inform the user 
that the authorities have been alerted!*/
#include <iostream>
using namespace std;

int main() {
    const int correctPassword = 12345;
    int userInput;S
    int attemptsLeft = 5;

    cout << "Enter the password to access the safe:\n";

    while (attemptsLeft > 0) {
        cout << "Password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << "Welcome to the Secure Area!" << endl;
            break;
        } else {
            attemptsLeft--;
            if (attemptsLeft > 0) {
                cout << "Incorrect password. Attempts remaining: " << attemptsLeft << endl;
            } else {
                cout << "Too many failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }

    return 0;
}
