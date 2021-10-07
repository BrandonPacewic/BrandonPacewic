/* Brandon Pacewic Jan 30, 2021

Function Programing assignment

This program uses functions to help you find out how much your gym membership will cost.
It uses a user menu and four different functions to calculate a gym membership and 
discounts.

Source: None
*/

#include <iostream>
using namespace std;

//menu function
char menu(char x){
    cout << "What would you like to do?" << endl << "a. Calculate membership costs.";
    cout << endl << "b. quit this program." << endl;
    cin >> x;
    return x;
}

//show information function
void showInformation(){
    cout << "Welcome to Brandon's program that will help you calculate the cost of your fitness membership" << endl;    
    cout << endl << "Each month costs $50; if you pay for 12 or more months you get a discount of 15%" << endl;
    cout << "Each personal training session is $30; paying for more than 5 gives you a 20% discount" << endl;
    cout << "If you are a senior citizen you get a discount of 30%" << endl;
    cout << "The larger discount takes priority, they do not stack." << endl << endl;
}

//get information function
void getInformation(int & months, int & pts, bool & senior){
    cout << endl << "How many months would you like to pay for: ";
    cin >> months;
    cout << "How many personal training sessions would you like: ";
    cin >> pts;
    char a;
    cout << "Are you a senior citizen? (y/n): ";
    cin >> a;
    
    while(a != 'y' && a != 'Y' && a != 'n' && a != 'N'){
        cout << "You did not enter a valid option please try again" << endl;
        cout << "Are you a senior citizen? (y/n): ";
        cin >> a;
    }
    
    if(a == 'y' || a == 'Y'){
        senior = true;
    }else{
        senior = false;
    }
}

//cost calculation function
double calcCost(int mon, int pts, bool sen){
    double dis;
    double cost;
    
    if(sen == true){
        dis = 0.7;
    }
    else if(pts > 5){
        dis = 0.8;
    }
    else if(mon >= 12){
        dis = 0.85;
    }else{
        dis = 1;
    }
    
    cost = ((mon * 50) + (pts * 30)) * dis;
    return cost;
}

int main(){
    //declaring vars
    char cha1;
    int months;
    int pts;
    bool senior;
    
    //first user choice
    cha1 = menu(cha1);
    
    //main loop
    while(cha1 != 'b' && cha1 != 'B'){
    
        //checking for valid input
        while(cha1 != 'a' && cha1 != 'A' && cha1 != 'b' && cha1 != 'B'){
            cout << endl << "You did not enter a valid option please try again." << endl;
            cha1 = menu(cha1);
        }   
        
        //function calls
        showInformation();
        getInformation(months, pts, senior);
        double totalCost = calcCost(months, pts, senior);
        
        //showing cost
        cout << "You will pay $" << totalCost << " for your membership." << endl << endl;
        
        //loopcontrol
        cha1 = menu(cha1);
    }
    
    //quit message
    cout << "You have chosen to quit" << endl;
    
    return(0);
}


















