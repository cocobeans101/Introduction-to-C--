/* Computes a student's final course grades*/
#include <iostream>

using namespace std;
const double HW_WEIGHT = 0.4;
const double MIDTERM_WEIGHT = 0.25;
const double FINAL_WEIGHT = 0.35;

int main(){
    // Declare variables...
    int hw1, hw2, hw3, midtermExam, finalExam;
    double avgHomework, finalGrade;

    //Prompt user for homework scores and makes sure homework is between 0 and 100
    cout << "Enter three homework scores: ";
    cin >> hw1;
    if(hw1 >= 0 && hw1 <= 100){
        cout << "First homework score  accepted." << endl;
    } else{
        cout << "Error: First homework scores must be between 0 and 100." << endl;
    }
    cin >> hw2;
    if(hw2 >= 0 && hw2 <= 100){
        cout << "Second homework score  accepted." << endl;
    } else{
        cout << "Error: Second homework scores must be between 0 and 100." << endl;
    }
    cin >> hw3;
    if(hw3 >= 0 && hw3 <= 100){
        cout << "Third homework score  accepted." << endl;
    } else{
        cout << "Error: Third homework scores must be between 0 and 100." << endl;
    }

    // Prompt user for exam scores...
    cout << "\nEnter the midterm and final exam scores: ";
    cin >> midtermExam;
    cin >> finalExam;

    // Calculate average homework score...
    avgHomework = (hw1 + hw2 + hw3) / 3;

    // Calculate final grade (weighted)...
    finalGrade = ((avgHomework * HW_WEIGHT) + (midtermExam * MIDTERM_WEIGHT) + (finalExam * FINAL_WEIGHT));

    // Print the outputs...
    cout << "\nFirst Homework score: " << hw1 << endl;
    cout << "Second Homework score: " << hw2 << endl;
    cout << "Third Homework score: " << hw3 << endl;
    cout << "Average Homework score: " << avgHomework << endl;
    cout << "Midterm Exam score: " << midtermExam << endl;
    cout << "Final Exam score: " << finalExam << endl;
    cout << "Final Grade (weighted): " << finalGrade << endl;
}