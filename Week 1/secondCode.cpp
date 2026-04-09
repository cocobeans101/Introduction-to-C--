//Try to calculate your age from 2 years. Go off the year and fastforward 2 years for the age.

#include<iostream>
using namespace std;

int main(){
    cout << "This program will give you your age in two years!" << endl;
    int birthYear;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "\nIn two years, you will be " << 2026 - birthYear << " years old!" << endl;
    return 0;
}