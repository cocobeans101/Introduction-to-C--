/* This is a program that will verify the username for the word "admin",
checks the temperature sensor reading, and prints a status message.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    //Verifies a username

    string userName;
    bool userBool;

    cout << "\nEnter username: ";
    getline(cin, userName);

    if(userName.find("admin") != string::npos){
        userBool = true;
    } else{
        userBool = false;
    }

    // Checks a temperature sensor reading

    double sensorTemp;
    bool sensorTempBool;
    
    cout << "Enter a sensor temperature: ";
    cin >> sensorTemp;

    sensorTemp -= 25.0;
    sensorTemp = fabs(sensorTemp);

    if(sensorTemp < 0.05){
        sensorTempBool = true;
    } else{
        sensorTempBool = false;
    }
    
    // Prints a system status message
    
    if(userBool == 1 && sensorTempBool == 1 ){
        cout << "System Authorized" << endl << endl;
    } else{
        cout << "Access Denied" << endl  << endl;
    }
    
}