/////////////////////////////////////////
/////////DAVID EDWARD ZUMERLE////////////
/////////STUDENT ID: 575808//////////////
///////COMPUTING YEAR 1 SEM 1////////////
/////////////////////////////////////////
/*Write a program that tests if a value is even. The programme should adhere to the following rules

The program should ask the user for a number from within the main function
The entered number should be passed to a function which determines if the value is an even number
If the number is even the function should return the following message: The provided number is even
If the number is odd the function should return the following message: The provided number is odd
The returned message should be output from within the main function*/

#include <iostream>
using namespace std;

int number;
//function that check if the number is odd or even
void oddEven(int){
    if(number % 2 == 0)
        cout<<"The number is Even."<<endl;
    else
        cout<<"the number is Odd";
}

int main(){
    //asking for a number to be checked
    cout<<"Input a number: ";
    cin>>number;
    //calling the function
    oddEven(number);
    return 0;
}
