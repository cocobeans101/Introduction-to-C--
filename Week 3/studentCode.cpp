/*This program stores and prints student information and
performs simple calculations*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    //Declare variables...
    string studentName;
    int studentAge;
    double creditsCompleted, studentGPA, creditsRemaining;

    //Assign values...
    getline(cin, studentName);
    cin >> studentAge;
    cin >> creditsCompleted;
    cin >> studentGPA;

    // Calculate the remaining credits (assume 120 to graduate)...
    creditsRemaining = 120.0 - creditsCompleted;

    // Print output...
    cout << "Student Information" << endl;
    cout << "--------------------" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Age: " << studentAge << endl;
    cout << "GPA: " << studentGPA << endl;
    cout << "Credits Completed: " << creditsCompleted << endl;
    cout << "Credits Remaining: " << creditsRemaining << endl;
}