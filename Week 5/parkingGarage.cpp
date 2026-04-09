#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int vehicleType, hoursParked, freeParking = 0, paidParking = 0, vehicles = 0; 
    double hourlyRate, parkingFee, totalRevenue;

    cout << "\nEnter vehicle type (1 = car, 2 = truck, -1 = quit): ";
    cin >> vehicleType;

    cout << "Enter the hours parked: ";
    cin >> hoursParked;

    while(vehicleType != -1){
        if(vehicleType == 0 || vehicleType > 2){
            cout << "\nInvalid number. Try Again!" << endl;
            cout << "Enter vehicle type (1 = car, 2 = truck, -1 = quit): ";
            cin >> vehicleType;
            cout << "Enter the hours parked: ";
            cin >> hoursParked;
            continue;
        }

        if(vehicleType == 1){
            hourlyRate = 2.00;
        } else if(vehicleType == 2){
            hourlyRate = 3.50;
        }

        if(hoursParked <= 1){
            parkingFee = 0.00;
            vehicles++;
            freeParking++;
        } else if(hoursParked > 1){
            parkingFee = hourlyRate * hoursParked;
            vehicles++;
            paidParking++;
        }

        totalRevenue += parkingFee;

        cout << fixed << setprecision(2);
        cout << "Parking Fee: $" << parkingFee << endl;
        cout << "Total Revenue: $" << totalRevenue << endl;

        cout << "\nEnter vehicle type (1 = car, 2 = truck, -1 = quit): ";
        cin >> vehicleType;

        if(vehicleType == 0 || vehicleType > 2 || vehicleType < -1){
            cout << "Invalid number. Try Again!" << endl;
            cout << "Enter vehicle type (1 = car, 2 = truck, -1 = quit): ";
            cin >> vehicleType;
            cout << "Enter the hours parked: ";
            cin >> hoursParked;
            continue;
        } else if(vehicleType == -1){
            break;
        }

        cout << "Enter the hours parked: ";
        cin >> hoursParked;
    }
    
    cout << "\nTotal vehicles processed: " << vehicles << endl;
    cout << "Number of paid vehicle parking: " << paidParking << endl;
    cout << "Number of free vehicle parking: " << freeParking << endl;
    cout << "Total revenue: " << totalRevenue << endl << endl;

}