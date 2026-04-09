#ifndef TICKETINGMENU_H
#define TICKETINGMENU_H

void purchaseTicket(double &wallet, double price = 25.0);
// Price has a default value of 25.0

void purchaseTicket(double &wallet, int quantity, double price);

#endif