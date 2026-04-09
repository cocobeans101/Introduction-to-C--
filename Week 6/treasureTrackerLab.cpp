#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    cout << endl;

    vector<int> treasure;
    vector<string> treasureName;
    
    int num = 1, treasureValue, total = 0, duplicates = 0;
    string name;

    while(num == 1){
        cout << "Enter treasure value: ";
        cin >> treasureValue;
        treasure.push_back(treasureValue);

        cout << "Enter treasure name: ";
        cin >> name;
        treasureName.push_back(name);

        int choice;

        cout << "\nEnter what you would like to do: " << endl;
        cout << "1. View Treasure\n2. Continue\n0. Quit\nChoice: ";
        cin >> choice;
        cout << endl;

        switch(choice){
            case 1:         // View treasure...
                for(int i = 0; i < treasure.size(); i++){
                    cout << "Treasure name for Treasure " << i + 1 << " is " << treasureName[i] << endl;
                    cout << "Treasure " << i + 1 << ": " << treasure[i] << endl;
                }
                break;

            case 2:         //Continue
                break;

            case 0:         // Quit...
                cout << "You quit..." << endl;
                num = 2;
                break;

            default:        // Default is the wrong choice
                cout << "Wrong choice!" << endl;
                break; 
        }

    }
    int highestValue = treasure[0], lowestValue = treasure[0];

    //View all displayed treasure values and names
    cout << "-----Treasure display------" << endl;
    for(int i = 0; i < treasure.size(); i++){
        cout << "Treasure name for Treasure " << i + 1 << " is " << treasureName[i] << endl;
        cout << "Treasure " << i + 1 << ": " << treasure[i] << endl;
    }
    
    // Total treasure amount...
    cout << "\n-----Total------" << endl;
    for(int i = 0; i < treasure.size(); i++){
        total += treasure[i];
    }
    cout << "Total amount of treasure is " << total << endl;
    
    // Display highest treasure value

    cout << "\n-----Highest value------" << endl;
    for(int i = 0; i < treasure.size(); i++){
        if(treasure[i] > highestValue){
            highestValue = treasure[i];
        }
    }
    cout << "Highest value in treasure is " << highestValue << endl;
    
    // Display lowest treasure value
    cout << "\n-----Lowest value------" << endl;
    for(int i = 0; i < treasure.size(); i++){
        if(treasure[i] <= lowestValue){
            lowestValue = treasure[i];
        }
    }
    cout << "Lowest value in treasure is " << lowestValue << endl;
    
    // Displays duplicates
    cout << "\n-----Duplicates------" << endl;
    for(int i = 0; i < treasure.size(); i++){
        for(int j = i + 1; j < treasure.size(); j++){
            if(treasure[i] == treasure[j]){
                duplicates++;
                break;
            }
        }
    }
    if(duplicates > 0){
        cout << "Number of duplicates in treasure is " << duplicates << endl << endl;
    }else if(duplicates == 0){
        cout << "No duplicates wer found!" << endl << endl;
    }
}