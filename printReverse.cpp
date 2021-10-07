/* Brandon Pacewic Jan 21, 2021

This program takes a word from the user and
prints the word one letter at a time, then
it prints the same word one letter at a time
in reverse.

Sorce: Mr.Cornachion for for-loops and string.length() function
*/

#include <iostream>
using namespace std;

int main(){
    //declaring vars
    string str1;
    
    //user input
    cout << "Enter a word: ";
    cin >> str1;
    
    //loop for string forwards
    for(int i = 0; i < str1.length(); i++){
        cout << str1[i] << endl;
    }
    
    //same string in reverse
    cout << "-------" << endl;
    
    //loop for string in reverse
    for(int i = str1.length() - 1; i >= 0; i--){
        cout << str1[i] << endl;
    }
    
    return(0);
}





