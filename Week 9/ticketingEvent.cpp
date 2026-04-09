#include <iostream>

#include "ticketing.h" // Includes header file ticketing.h into the main code
// Because string is defined in ticketing.h we dont need the #include <string> and can still use strings

// Header file is a file already written for us
// Every function can have it's own file

double calculatePrice(double basePrice, double fee){
    // Error checking
    if(basePrice < 0) // This can work without the curly brackets if there is only one line
    // This needs the indentation to work
        return 0.0;
    double total = basePrice + fee;
    return total;
}

// Overloading function...

double calculatePrice(double basePrice, string vipTier){
    /*
    Use the curly brackets for the if statements if there are multiple lines of code.
    */
    if(vipTier == "BackStage")
        return basePrice + 500.0;
    if(vipTier == "FrontRow")
        return basePrice + 200.0;
    return basePrice; // Standard
}

bool isValid(int section){
    return (section >= 100 && section <= 500);
    // This is a shortened statement of if section >= 100 && section <= 500, return true.
}
