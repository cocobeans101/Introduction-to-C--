#include <iostream>
#include <iomanip>
#include "ticketingMenu.h"
#include "ticketingKitchen.cpp"

int main(){
    double myWallet = 100.0;
    purchaseTicket(myWallet);
    cout << fixed << setprecision(1);
    cout << "\nWallet Balance: " << myWallet << endl;

    purchaseTicket(myWallet, 3, 20.0);
    cout << "Wallet Balance: " << myWallet << endl << endl;
}