/*
Brandon Pacewic Feb 2, 2021

Print Array Function 

This program is a quick showing of a print array Function
It is set up in such a way that it will work for all int arrays

Sorce: Mr.Cornachione for arrays
*/

#include <iostream>
using namespace std;

//print array function
void printArray(int numbers[], int size){
    cout << "{ ";
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    cout << "}" << endl;
}


int main(){
    //arrays
    int arr1[8] = {5, 8, 1, 2, 5, 7, 11, 12};
    int size1 = 8;
    
    int arr2[4] = {4, 643, 200, 333};
    int size2 = 4;
    
    int arr3[6] = {4, 5, 7, 1, 8, 3};
    int size3 = 6;
    
    //print array function calls
    printArray(arr1, size1);
    cout << endl;
    
    printArray(arr2, size2);
    cout << endl;
    
    printArray(arr3, size3);
    
    return (0);
}



