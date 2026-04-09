#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hour, minute, age;
    bool dayType; // 0 = weekday, 1 = weekday
    double ticketPrice, discount;
    char colon;

    // Prompt the user for information...
    cout << "\nEnter time of entry (HH:MM) ";
    cin >> hour >> colon >> minute;
    cout << "Enter day type (0 = weekday, 1 = weekend): ";
    cin >> dayType;
    cout << "Enter your age: ";
    cin >> age;

    if(dayType == 0){
        if(hour < 5){
            ticketPrice = 5.50;
        } else if(hour >= 5 && hour <= 8){
            ticketPrice = 11.00;
        } else if(hour >= 9){
            ticketPrice = 7.50;
        }
    } else if(dayType != 0){
        if(hour < 5){
            ticketPrice = 7.50;
        } else if(hour >= 5 && hour < 9){
            ticketPrice = 12.50;
        } else if(hour >= 9){
            ticketPrice = 9.50;
        }
    }
    
    // Determines the discount based on user's age...
    if(age < 12){
        discount = ticketPrice * 0.2;
        ticketPrice -= discount;
    } else if(age >= 65){
        discount = ticketPrice * 0.35;
        ticketPrice -= discount;
    }
    
    // Prints the time
    if(minute == 0){
        cout << "Time: " << hour << colon << "00" << endl;
    } else{
        cout << "Time: " << hour << colon << minute << endl;
    }
    
    // Prints whether it's a weekend or weekday
    if(dayType == 0){
        cout << "It is a weekday" << endl;
    } else{
        cout << "It is a weekend" << endl;
    }

    // Prints the user's age
    cout << "You are " << age << " years old" << endl;

    // Prints the final ticket price with discounts added
    cout << "The final ticket price is $" << fixed << setprecision(2) << ticketPrice << endl << endl;
}