#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()

using namespace std;

int main() {
    // ------------------------------------------------------
    //2.15 Strings
    // ------------------------------------------------------
    string fullName, firstName;
    //cout << "\n\nPlease enter your first name: ";
    //cin >> firstName;

    //cout << "\nYour first name using cin is:" << firstName;
    
    //cin leaves a newline character that needs to be removed...
    //cin.ignore();
 
    //cout << "\n\nPlease enter your full name: ";
    //getline(cin, fullName);

    //cout << "\n\nYour full name is: " << fullName << endl;

    // ------------------------------------------------------
    // 2.16 Integer Overflow
    // ------------------------------------------------------
    
    int maxInt = 2147483647; // Maximum value for 32-bit int

    //maxInt = maxInt + 1; // Overcflow Error!

    // ------------------------------------------------------
    // 2.17 Numeric Data Types
    // ------------------------------------------------------

    int age = 20;
    double gpa = 3.75;
    char grade = 'A';
    bool isEnrolled = true;

    // ------------------------------------------------------
    // 2.18 Unsigned
    // ------------------------------------------------------

    unsigned int score = 10;
    //cout << "\nScore: " << score << endl;

    // ------------------------------------------------------
    // 2.19 Random Numbers
    // ------------------------------------------------------
    srand(time(0)); // Seed random number generator (do once)
    int randomNumber = rand() % 200 + 1; 
    //cout << "\nRandom Number: " << randomNumber << endl;

    // ------------------------------------------------------
    // 2.20 Debugging
    // ------------------------------------------------------

    int x = 5, y = 1;

    //cout << x / y << endl;


    // ------------------------------------------------------
    // 2.21 auto (C++11)
    // ------------------------------------------------------

    auto totalCredits = 15; // int
    auto tution = 3000.55; // double
    auto status = true; // bool

    // ------------------------------------------------------
    // 2.2 Style Guidelines
    // ------------------------------------------------------
    
    // - Usse meaningful variable names
    // - One statement per line
    // - Consistent indentation
    // - Useful comments

    /* Salary Calculations*/

    //Variable declarations
    string employeeName;
    int hoursWorked;
    double hourlyRate, employeePay;
    
    cout << "\n Welcome to the Salary Calculator!!\n \n";
    cout << "\nPlease enter the full name of your employee: ";
    getline(cin, employeeName);
    cout << endl;
    cout << "\nHow many hours did they work? \nHours: ";
    cin >> hoursWorked;
    cout << "\nHourly wage? \nWage: ";
    cin >> hourlyRate;
    cin.ignore();

    //Calculations...
    employeePay = hoursWorked * hourlyRate;

    //Outputs...
    cout << endl << endl;
    cout << "Name of the employee: " << employeeName << endl;
    cout << "Hours worked: " << hoursWorked << " hours worked" <<endl;
    cout << "Hourly wage: $" << hourlyRate << endl;
    cout << "Total pay: $" << employeePay << endl;  
    cout << "Thank you for using the salary calculator!";

    /* Friends and their ages output*/

    string userName, friend1, friend2, friend3;
    int userAge, age1, age2, age3;

    cout << "\n\nPlease enter your name: ";
    getline(cin, userName);
    cout << "\nPlease enter your age: ";
    cin >> userAge;
    cin.ignore();

    cout << "\n\nPlease enter your first friend's name: ";
    getline(cin,friend1);
    cout << "\nPlease enter first friend's age: ";
    cin >> age1;
    cin.ignore();

    cout << "\n\nPlease enter your second friend's name: ";
    getline(cin,friend2);
    cout << "\nPlease enter second friend's age: ";
    cin >> age2;
    cin.ignore();

    cout << "\n\nPlease enter your third friend's name: ";
    getline(cin,friend3);
    cout << "\nPlease enter third friend's age: ";
    cin >> age3;
    cin.ignore();

    cout << "\n\nHello " << userName << "! You are " << userAge << " years old." << endl;
    cout << "The name of your three friends are: " << endl;
    cout << "Name: " << friend1 << endl;
    cout << "Age: " << age1 << endl;
    cout << "Name: " << friend2 << endl;
    cout << "Age: " << age2 << endl;
    cout << "Name: " << friend3 << endl;
    cout << "Age: " << age3 << endl;
}