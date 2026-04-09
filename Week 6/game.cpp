#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
/* Your game must allow:
Player 1 must manage two vectors 
Player 2 must manage two vectors
User to view both vectors for a player
Battle between two players
A custom option of your choosing
Quit
*/

//player1Health = 100, player2Health = 100;
//I finished my part which is player1
//You can pretty much copy and past the code and change it to player 2
    
    vector <int> player1 = {1, 100, 0, 0};
    vector<string> player1Names;
    vector <int> player2;

    string names;

    player1.push_back(1);
    player1.push_back(100);
    player2.push_back(2);
    player2.push_back(100);
    
    cout << "\nWelcome to game..." << endl << endl;
    cout << "Player 1, Enter your name: ";
    cin >> names;
    player1Names.push_back(names);
    player1Names.push_back("health");
    player1Names.push_back("total attack damage");
    player1Names.push_back("total health gained");

    int round = 1;

    while(player1[1] > 0 && player2[1] > 0){
        cout << "\nRound " << round << ":" << endl;
        cout << player1Names[0] << "'s turn: " << endl;
        cout << player1Names[0] << " health: " << player1[1] << endl << endl;

        int choice;

        cout << "What would you like to do: ";

        cout << "\n1. Attack" << endl;
        cout << "2. Heal" << endl;
        cout << "3. Quit" << endl;
        cout << "Choose your path: ";
        cin >> choice;

        switch(choice){
            case 1:{            //Attack
                int damage = rand() % 20;
                player2[1] -= damage;
                cout << "Player 2 took " << damage << " damage!" << endl;
// Change player 2 to player name
                break;}

            case 2: {           //Heal
                int health = rand() % 10 + 1;
                player1[1] += health;
                cout << "You've recovered " << health << " health." << endl << endl;
                break;}
            
            case 3: {           //Quits
                player1[1] = -1;
                cout << player1Names[0] << " quits!" << endl;
                break;}
                
            default: {          //Default
                cout << "Invalid choice!\n";
                continue; }
        }
    if(player2[1] < 1){
        cout << "\nPlayer 2 loses!" << endl;
// Change player 2 to player 2 name        
        break;
    }
// Player 2 stuff

        round++;
    }
}