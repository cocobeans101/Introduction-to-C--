/* Arrays...*/
#include <iostream>
#include <vector> // Allows user to use vectors
#include <string>

using namespace std;

int main(){
    int scores[4] = {5, 6, 7, 8}; // Static...
    // Creates an array
    cout << endl;
    cout << "First score: " << scores[0] << endl;
    cout << "Last score: " << scores[3] << endl;
    // Can't add things to an array

    cout << endl;

    // Vectors...

    vector<int> treasure; // Creates a vector
    treasure.push_back(50); // Adds the element to the end of the vector
    treasure.push_back(100);
    treasure.push_back(25); // Treasure: {50,100, 25}
    treasure.push_back(75); 
    treasure.push_back(200);
    treasure.push_back(28); 

    cout << "First treasure: " << treasure[0] << endl;
    cout << "Total items: " << treasure.size() << endl << endl;

    int total = 0;

    // Iterations...
    for(int i = 0; i < treasure.size(); i++){
        cout << "Treasure " << i + 1 << ": " << treasure[i] << endl;
        total += treasure[i];
        cout << "Running total: " << total << endl;
    }
    cout << endl;

    int choice;

    vector <string> names;
    names.push_back("Steve"); 
    names.push_back("Gold");
    names.push_back("Silver"); 
    names.push_back("Huskies"); 
    names.push_back("Bronze");
    names.push_back("Dog"); 

    cout << "Enter what you would like to do: " << endl;
    cout << "1. Add treasure, \n2. View Treasure\n3. Total Value\n0. Quit\nChoice: ";
    cin >> choice;

    switch(choice){
        case 1:             // Add treasure...
            int value;
            cout << "Enter treasure value: ";
            cin >> value;
            treasure.push_back(value);
            break;

        case 2:             // View treasure...
            for(int i = 0; i < treasure.size(); i++){
                cout << "Treasure name for Treasure " << i + 1 << " is " << names[i] << endl;
                cout << "Treasure " << i + 1 << ": " << treasure[i] << endl;
            }
            break;

        case 3:             // Total treasure...
            total = 0;
            for(int i = 0; i < treasure.size(); i++){
                total += treasure[i];
            }
            cout << "Total treasure: " << total << endl;
            break;

        case 0:             // Quit...
            cout << "You quit..." << endl;
            break;

        default:            // Default is the wrong choice
            cout << "Wrong choice!" << endl;
            break;
            
    }

}
