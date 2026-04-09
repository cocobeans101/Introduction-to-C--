/*This program stores and prints student information and
performs simple calculations*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    //Declare variables...
    string studentName;
    int studentAge, studentID;
    double creditsCompleted, studentGPA, creditsRemaining, creditsTaking;

    //Assign values...
    getline(cin, studentName);
    cin >> studentAge;
    cin >> studentGPA;
    cin >> studentID;
    cin >> creditsCompleted;

    // Calculate the remaining credits (assume 120 to graduate)...
    creditsRemaining = 120.0 - creditsCompleted;

    // Print output...
    cout << "Student Information" << endl;
    cout << "--------------------" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Age: " << studentAge << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "GPA: " << studentGPA << endl;
    cout << "Credits Completed: " << creditsCompleted << endl;
    cout << "Credits Remaining: " << creditsRemaining << endl;

    // Checks to see if the student is full time or a part time student;
    cout << "Enter the number of credits you are taking this semester: ";
    cin >> creditsTaking;

    if(creditsTaking >= 12){
        cout << "You are a full-time student." << endl;
    } else{
        cout << "You are a part-time student." << endl;
    }
}