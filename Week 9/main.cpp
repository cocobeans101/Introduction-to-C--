#include <iostream>
#include "ticketing.h"
#include "ticketingEvent.cpp"

/*
Command B makes the little sidebar disappear.
Near the top right corner on the same line as the main file, and 
if you click the the small square with a line in it. You can split the screen between two seperate codes.
*/


int main(){
    cout << "---Campus Festival Ticketing---" << endl;

    double general = calculatePrice(50.0);

    cout << "General Admission: $" << general << endl;

    // Test function overload
    double vip = calculatePrice(50.0, "FrontRow");
    cout << "VIP Admission: $" << vip << endl;

    // Test error checking
    int userSection = 99;
    if(!isValid(userSection))
        cout << "Error: Section " << userSection << " does not exist!" << endl;
}