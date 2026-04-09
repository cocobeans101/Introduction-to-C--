// Header files end with .h instead of .cpp
// This is the header file to help stop doom scrolling
#ifndef TICKETING_H
#define TICKETING_H

#include<string>
using namespace std;


double calculatePrice(double basePrice, double fee = 10); // Default parameters
// Fee has a default parameter of 10, so if its called without a fee value its value is 10

double calculatePrice(double basePrice, string vipTier);
/*
This is function overloading, so if the function is called it will pick the 
function with the same parameter types
*/

bool isValid(int section);

#endif