#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int hour, minute, numPeople;
    bool dayType; // 0 = weekday, 1 = weekday
    double rate; // Hourly parking rate
    char colon;

    // Prompt the user to get the time...
    cout << "Enter time of entry (HH:MM)";
    cin >> hour >> colon >> minute;

    cout << "Enter number of people in the vehicle: ";
    cin >> numPeople;

    cout << "Enter day type (0 = weekday, 1 = weekend): ";
    cin >> dayType;

    // Determine the base rate
    if(dayType == 0){ // Weekday rates
        if(hour >= 0 && hour < 7){
            rate = 1.25;
        } else if(hour > 7 && hour >= 9){
            rate = 3.50;
        } else if (hour > 9 && hour >= 17){      // Implies hour is already greater than
            rate = 2.00;
        } else{
            rate = 1.25;
        }
    } else if(dayType != 0){ // Weekend rates within else block
        if(hour < 9 || hour >= 20){
            rate = 1/50;
        } else if(hour >= 9 && hour <= 17){
            rate = 2.75;
        } 
    }

    if (numPeople >= 3){
        if(dayType == 0 && hour >= 7 && hour <= 9 && minute != 0 ){
            rate = rate * 0.5;
        } 
    }

    // Output formatting
    cout << "Parking rate at ";

    if(hour == 0){
        cout << "12:";
    } else if(hour <= 12){
        cout << hour << ":";
    } else{
        cout << hour - 12 << ":";
    }

    cout << setfill('0') << minute;

    if(hour < 12){
        cout << " am";
    } else{
        cout << " pm";
    }

    cout << " is $" << fixed << setprecision(2) << rate << " per hour" << endl;

    return 0;
}