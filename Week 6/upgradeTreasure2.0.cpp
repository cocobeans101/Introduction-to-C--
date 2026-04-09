#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    cout << endl;

    vector<int> treasure1;
    vector<int> treasure2;
    
    int num = 1, treasureValue, total = 0, duplicates = 0;
    string name;
    bool compare = true;

    while(num == 1){
        cout << "Enter treasure1 value: ";
        cin >> treasureValue;
        treasure1.push_back(treasureValue);

        int choice;

        cout << "\nEnter what you would like to do: " << endl;
        cout << "1. Undo last treasure" << endl;
        cout << "2. Power Boost" << endl;
        cout << "3. Reverse Inventory" << endl;
        cout << "4. Continue" << endl;
        cout << "0. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        switch(choice){ // Treasure1 list...
            case 1:     // Undo last treasure...
            cout << "You want to undo " << treasure1.back() << endl;
            treasure1.pop_back();
            break;

            case 2:     // Power boost...
                for(int i = 0; i < treasure1.size(); i++){
                    treasure1[i] += 5;
                }
                break;

            case 3:     // Reverse Inventory...
                for(int i = 0; i < treasure1.size(); i++){
                    int value = treasure1[i];
                    treasure1[i] = treasure1[treasure1.size() - 1 - i];
                    treasure1[treasure1.size() - 1 - i] = value;
                }
                break;

            case 4:
                break;

            case 0:         // Quit...
                cout << "You quit..." << endl;
                num = 2;
                break;

            default:        // Default is the wrong choice
                cout << "Wrong choice!" << endl;
                continue; 
        }   
    }
    
    num = 1;
    while(num == 1){ // Treasure 2 list
        cout << "\nEnter treasure2 value: ";
        cin >> treasureValue;
        treasure2.push_back(treasureValue);

        int choice;
        cout << "\nEnter what you would like to do: " << endl;
        cout << "1. Undo last treasure" << endl;
        cout << "2. “Power Boost" << endl;
        cout << "3. Reverse Inventory" << endl;
        cout << "4. Continue" << endl;
        cout << "0. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        switch(choice){
            case 1:     // Undo last treasure...
                cout << "You want to undo " << treasure2.back() << endl;
                treasure2.pop_back();
                break;

            case 2:     // Power boost...
                for(int i = 0; i < treasure2.size(); i++){
                    treasure2[i] += 5;
                }
                break;

            case 3:     // Reverse Inventory...
                for(int i = 0; i < treasure2.size(); i++){
                    int value = treasure2[i];
                    treasure2[i] = treasure2[treasure2.size() - 1 - i];
                    treasure2[treasure2.size() - 1 - i] = value;
                }
                break;
            
            case 5:
                break;

            case 0:         // Quit...
                cout << "You quit..." << endl;
                num = 2;
                break;

            default:        // Default is the wrong choice
                cout << "Wrong choice!" << endl;
                continue; 
            }
        }
    
    int highestValue = treasure1[0], lowestValue = treasure1[0];

    //View all displayed treasure values and names
    cout << "\n-----Treasure1 display------" << endl;
    for(int i = 0; i < treasure1.size(); i++){
        cout << "Treasure " << i + 1 << ": " << treasure1[i] << endl;
    }

    //View all displayed treasure values and names
    cout << "\n-----Treasure2 display------" << endl;
    for(int i = 0; i < treasure2.size(); i++){
        cout << "Treasure " << i + 1 << ": " << treasure2[i] << endl;
    }
    
    // Total treasure amount...
    cout << "\n-----Total------" << endl;
    for(int i = 0; i < treasure1.size(); i++){
        total += treasure1[i];
    }
    cout << "Total amount of treasure1 is " << total << endl;
    for(int i = 0; i < treasure2.size(); i++){
        total += treasure2[i];
    }
    cout << "Total amount of treasure2 is " << total << endl;
    
    // Display highest treasure value

    cout << "\n-----Highest value------" << endl;
    for(int i = 0; i < treasure1.size(); i++){
        if(treasure1[i] > highestValue){
            highestValue = treasure1[i];
        }
    }
    cout << "Highest value in treasure1 is " << highestValue << endl;

    for(int i = 0; i < treasure2.size(); i++){
        if(treasure2[i] > highestValue){
            highestValue = treasure2[i];
        }
    }
    cout << "Highest value in treasure2 is " << highestValue << endl;
    
    // Display lowest treasure value
    cout << "\n-----Lowest value------" << endl;
    for(int i = 0; i < treasure1.size(); i++){
        if(treasure1[i] <= lowestValue){
            lowestValue = treasure1[i];
        }
    }
    cout << "Lowest value in treasure1 is " << lowestValue << endl;

    for(int i = 0; i < treasure2.size(); i++){
        if(treasure2[i] <= lowestValue){
            lowestValue = treasure2[i];
        }
    }
    cout << "Lowest value in treasure2 is " << lowestValue << endl;
    
    // Displays duplicates
    cout << "\n-----Duplicates------" << endl;
    for(int i = 0; i < treasure1.size(); i++){
        for(int j = i + 1; j < treasure1.size(); j++){
            if(treasure1[i] == treasure1[j]){
                duplicates++;
                break;
            }
        }
    }
    
    if(duplicates > 0){
        cout << "Number of duplicates in treasure1 is " << duplicates << endl << endl;
    }else if(duplicates == 0){
        cout << "No duplicates were found in treasure1!" << endl << endl;
    }

    for(int i = 0; i < treasure2.size(); i++){
        for(int j = i + 1; j < treasure2.size(); j++){
            if(treasure2[i] == treasure2[j]){
                duplicates++;
                break;
            }
        }
    }
    
    if(duplicates > 0){
        cout << "Number of duplicates in treasure2 is " << duplicates << endl << endl;
    }else if(duplicates == 0){
        cout << "No duplicates were found in treasure2!" << endl << endl;
    }

    
    for(int i = 0; i < treasure2.size(); i++){
        for(int j = 0; j < treasure1.size(); j++){
            if(treasure2[j] != treasure1[i]){
                compare = false;
            }
        }
    }

    if(compare){
        cout << "Treasure1 and treasure2 are identical!" << endl << endl;
    } else{
        cout << "Treasure1 and treasure2 are not identical!" << endl << endl;
    }

}
