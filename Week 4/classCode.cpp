#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "=== User Input Anayzer ===" << endl << endl;

    // Boolean Datatype

    bool isAdmin = false, hasAccess = true;

    cout << "Boolean Values: " << endl;
    cout << "isAdmin: " << isAdmin << endl;
    cout << "hasAccess: " << hasAccess << endl;

    // Order of Evaluations
    int a = 10, b = 5, c = 2;

    int result1 = a + b * c; // Multiplication happens first
    int result2 = (a + b) * c; // Parentheses changes evaluation order

    cout << "Order of Evaluation: " << endl;
    cout << "Result1: " << result1 << endl;
    cout << "Result2: " << result2 << endl;

    // Switch Statements

    int menuChoice;
    cout << "Enter a menu choice (1-3): ";
    cin >> menuChoice;

    switch (menuChoice){
        /*
        case 1:
            cout << "You chose Option 1" << endl;
        case 1:
            cout << "You chose Option 2" << endl;
            break;
        This will print both the options for 1 and the other one due
        not having a break.
        */
        case 1:
            cout << "You chose Option 1" << endl;
            break;
        case 2:
            cout << "You chose Option 2" << endl;
            break;
        case 3:
            cout << "You chose Option 3" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
    }
    cout << endl;
    cin.ignore(); // Ignores the cin space
    // String Access Operations

    string role;
    cout << "Enter your role (admin / user / guest): ";
    getline(cin, role);

    if(role == "admin"){
        cout << "Full system access granted." << endl;
    } else if(role != "guest"){
        cout << "Standard user access." << endl;
    } else{
        cout << "Limited guest access." << endl;
    }
    cout << endl;

    // String access

    cout << "First character of role: " << role[0] << endl; // Gets the first thing in role
    cout << "Last character of role: " << role[role.length() - 1] << endl; // Gets the last index of role
    // .Length() function is included in the string folder

    char firstChar = role[0];

    if(isalpha(firstChar)){
        cout << "First character is a letter." << endl;
    } 

    cout << "Uppercase version: " << static_cast<char>(toupper(firstChar)) << endl << endl;

    // Find, and replace text

    int pos = role.find("ad");

    if(pos != string::npos){
        // string::npos means that what you wanted wasn't found
        cout << "ad found at position " << pos << endl;
    } else{
        cout << "ad not found!" << endl;
    }

    role.insert(0, "[ROLE] "); // Inserts the string [ROLE]  at the position 0

    role.replace(0, 6, "[USER] "); // Replaces the string from index 0 and index 6 and replaces them with [USER] 

    // Conditional Expressions...

    int age = 20;

    string staus = (age >= 18) ? "Adult" : "Minor"; 
    /*
    Replaces an if statement
    The stuff in parentheses is the if statement, while anything after the 
    question mark is the output depending on whether the statement is true or false
    */

    int number = 100;

    if(number != 0 && (100 / number) > 2){
        cout << "Valid number and division result > 2" << endl;
    } else{
        cout << "Short-circuit prevented division" << endl;
    }
}