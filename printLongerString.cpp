/* Brandon Pacewic Jan 21, 2021

This program takes to string inputs from the user and finds the one that 
has more characters

*/

#include <iostream>
using namespace std;

main(){
    //declaring vars
    string str1, str2;
    
    //user input
    cout << "Enter any string of characters: ";
    cin >> str1;
    cout << "Enter another string of characters: ";
    cin >> str2;
    
    //printing the one that is longer
    if(str1.length() > str2.length()){
        cout << endl << "String 1 is longer than string 2." << endl;
    }
    else if(str2.length() > str1.length()){
        cout << endl << "String 2 is longer than string 1." << endl;
    }else{
        cout << endl << "Both of the strings are the same length." << endl;
    }
    
    return(0);
}





