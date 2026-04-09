//This is a program for printing hello world.

#include<iostream> //Gives code the power to input or output anything
using namespace std; //Gives access to the standard library which gives functions without having to retype everything
//These two are the most important lines

int main(){
    //Main function where the code is executed
    cout << "Hello World" << endl; //Prints Hello World on the screen
    //Cout is pronounced as c-out

    //Next I want to add two numbers...
    cout << "This program will add, multiply, and divide two numbers for you." << endl;
    int num1;
    int num2;

    cout << "Enter num 1: ";
    cin >> num1; //Pronounced c-in. Has the user give input for num1
    cout << "Enter num 2:";
    cin >> num2; //Has the user give input for num2

    //This is where we add the numbers...
    int sum;
    sum = num1 + num2;
    cout << "Sum of two numbers: ";
    cout << sum; 

    //This is where we multiply the numbers...
    cout << "\nProduct of the two numbers is " << num1 * num2 << endl;

    //This is where we divide the numbers...
    cout << "Quotient of the two numbers is " << num1 / num2 << endl;
    return 0; //Ends the program
}