/* Brandon Pacewic Jan 19, 2021

Midterm
Prompt 1 Fun With Numbers

This program takes repeated user inputs of ints, if the value of the int is 
even it is added to a total sum of all even numbers entered up to this point.
If the int is odd we count it as another odd number. At the end we output
the sum of all the even numbers, and the count of how many odd numbers were entered.

Source: None it’s a test
*/

#include <iostream>
using namespace std;

main(){
    //declaring vars
    int sumOfEven;
    int CountOfOdd;
    int num1;
    
    //first user input and loop control
    cout << "Enter any number or '-999' to quit: ";
    cin >> num1;
    
    //while loop || if user choice is -999 then quit
    while(num1 != -999){
        
        //if/else || even/odd
        if(num1 % 2 == 0){
            sumOfEven = sumOfEven + num1;
        }else{
            CountOfOdd = CountOfOdd + 1;
        }
        
    //loop control    
    cout << "Enter any number or '-999' to quit: ";
    cin >> num1;
    }
    
    //showing the sum of even numbers and the count of odd numbers
    cout << endl << "You have chosen to quit." << endl;
    cout << "The sum of even numbers is " << sumOfEven << endl;
    cout << "The count of odd numbers is " << CountOfOdd << endl;
    
    return(0);
}





