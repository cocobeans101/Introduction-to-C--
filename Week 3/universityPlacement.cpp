/* This program gathers the gpa, placement test score, and major from the user,
    the program will then print the user's placement level and major depending on the inputs.
*/

#include <iostream>

using namespace std;

int main() {
    //Declare variables...
    double gpa;
    int placementScore, major;

    // Get user inputs...
    cout << "\nEnter your GPA: ";
    cin >> gpa;
    cout << "Enter your placement test score: ";
    cin >> placementScore;
    cout << "Select your major (1 = CS, 2 = IT, 3 = Other): ";
    cin >> major;

    // Prints placement level...
    if(gpa < 2.0){
        cout << "Not eligible" << endl;
    } else if(gpa >= 3.5 && placementScore >= 85){
        cout << "Advanced placement" << endl; 
    } else if(gpa >= 2.5 && placementScore >= 70){
        cout << "Standard placement" << endl; 
    } else{
        cout << "Intro placement" << endl; 
    }

    // Prints major...
    if(major == 1){
        cout << "Computer Science" << endl << endl;
    } else if(major == 2){
        cout << "Information Technology" << endl << endl;
    } else{
        cout << "Other Major" << endl << endl;
    }
}