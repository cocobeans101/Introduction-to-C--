#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    istringstream inSS;
    string line;
    string firstName, lastName;
    int age;
    bool inputDone;
    
    inputDone = false;

    // Prompted the user...
    cout << "Enter: First Name Last Name Age" << endl;
    cout << "(\"Exit\" as firstname exists)." << endl << endl;
    // Collecting data as long as "exit" is not entered...
    while(!inputDone){
        // Enter the line into the string line...
        getline(cin, line); // Gets whole line with spaces
        
        inSS.clear(); // Clears out string buffer
        inSS.str(line); 
        // str function breaks up the line based on spaces; every word in the line can have it's own variable

        // Process the first name...
        inSS >> firstName;
        
        // Parse the value...
        if(firstName == "Exit" || firstName == "exit"){
            cout << "---Exiting.---" << endl;
            inputDone = true;
        } else{
            inSS >> lastName;
            inSS >> age;

            cout << firstName << " " << lastName << " is " << age << " years old" << endl;
        }
    }
    
    // << is the insertion operator
    // cout sends data out of the program

    // cout << "Enter your full name: ";
    // getline(cin, fullName); 
    // cout << "\nEnter your age: ";
    // cin >> age;
    // cout << endl;

    // cout << "Full name: " << fullName << endl;
    //cout << "Age: " << age << endl;
    
}