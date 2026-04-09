#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hour, minute, dayType, users, totalEntries, freeEntries = 0, paidEntries = 0; // Initialized paidEntries and freeEntries
    char colon;
    double usageFee, finalFee, totalRevenue, maintenanceFee = 0;

    // ---Input from user---
    cout << "Enter day type (0 = weekday, 1 = weekend): ";
    cin >> dayType;
    
    cout << "Enter entry time (HM:MM): ";
    cin >> hour >> colon >> minute;

    if(dayType == 0){ // Weekday
        if(hour <= 7){
            usageFee = 1.25;
        } else if(hour > 7 && hour <= 10){
            usageFee = 3.50;
        } else if(hour > 10 && hour <= 18){
            usageFee = 2.00;
        } else{
            usageFee = 1.25;
        }
    } 
    else{ //Weekends
        if(hour < 9 || hour >= 19){
            usageFee = 2.50;
        } else{
            usageFee = 3.75;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nBase usage fee: $" << usageFee << endl;

    // ------ While loop ------
    // Sentinel-controlled loop...

    cout << "\nEnter the number of people (-1 to stop): ";
    cin >> users;

    while(users != -1){
        // -- Input validation...
        if(users < 0){
            cout << "Invalid number. Try Again!\n";
            cout << "Enter number of people (-1 to stop): ";
            cin >> users;
            continue;
        } 

        totalEntries += 1; // totalEntries = totalEntries + 1
        // totalEntries++  == totalEntries = totalEntries + 1

        // ---Conditional logic ---
        if(users >= 3 && dayType == 0 && hour >= 8 && hour <= 10){
            // Weekday morning group discount
            finalFee = usageFee * 0.5;
            paidEntries++;
        } else if(users >= 3){
            // Weekend group = free
            finalFee = 0.0;
            freeEntries++;
        } else if(users == 1 || users == 2){
            // Small groups pay full price
            finalFee = usageFee;
            paidEntries++;
        } else{
        finalFee = 0.0;
        freeEntries++;
        }

        totalRevenue += finalFee;

        //Outputs...
        cout << "Users: " << users << " | fee Charges: $" << finalFee << " | Running total: $" << totalRevenue << endl;
        
        cout << "\nEnter number of people (-1 to stop):";
        cin >> users;
    }

    // For loops
    for(int i = 0; i < 40; i++){
        cout << "=";
    }

    cout << endl;

    cout << "SESSION SUMMARY\n";
    cout << "Paid entries: " << paidEntries << endl;
    cout << "Free entries: " << freeEntries << endl;

    cout << "Paid Entries Bar: ";
    for(int i = 0; i < paidEntries; i++){
        cout << "#";
    }
    cout << endl;

    cout << "Free Entries Bar: ";
    for(int i = 0; i < freeEntries; i++){
        cout << "*";
    }
    cout << endl;

    
    for(int i = 1; i <= paidEntries; i++){ // Offsets with the <= symbol
        maintenanceFee+= 1.00;
    }
    cout << "\nMaintenanceFee Fee: $" << maintenanceFee << endl;
    
    cout << "\nTotal Revenue collected: $" << totalRevenue << endl;


}