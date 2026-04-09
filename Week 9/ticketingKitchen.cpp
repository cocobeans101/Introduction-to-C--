#include <iostream>

#include "ticketingMenu.h"

using namespace std;

void purchaseTicket(double &wallet, double price){
    // Error checking
    if(wallet < price)
        cout << "Transaction Declined" << endl;
    else
        wallet -= price;
}

void purchaseTicket(double &wallet, int quantity, double price){
    if(wallet < price)
        cout << "Transaction Declined" << endl;
    else
        wallet -= (price * quantity);
}