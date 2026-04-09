/* PLayer can fight enemies, rest, or quit. Nested loops display enemy waves, and the game will end when 
the player wins, loses, or quits. */
#include <iostream>
#include <cstdlib>

using namespace std;

enum GameState {PLAYING, WON, LOST, QUIT}; // Creates a new data type. GameState can only hold the 4 values: playng, won, lost, quit

void printWelcome(); // Void returns nothing
void printStats(int health, int attack); // health and attack are the arguments
int getValidChoice();
int userChoice(int choice);
int levelDifficulty();



// Function defintions...
void printWelcome(){
    cout << "\nWelcome to THE ARENA OF DEATH!\n\n";
}

void printStats(int health, int round, int attack){
    cout << "\n----------------------------\n";
    cout << "Round: " << round << endl;
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl;
}

int getValidChoice(){ 
    /* 
    While loop is like an if statement. A do while loop has the work done first 
    then states the condition
    */
    int choice;
    do{
        cout << "\n1. Fight\n";
        cout << "2. Rest\n";
        cout << "3. Quit\n";
        cout << "Choose your path: ";
        cin >> choice;
    } while(choice != 1 && choice != 2 && choice != 3); // Always end with semicolon

    return choice;
}

int levelDifficulty(){
    int difficulty;
    do{
        cout << "\nEnter difficulty: (1. Easy, 2. Hard): ";
        cin >> difficulty;
    } while(difficulty != 1 && difficulty != 2);

    if(difficulty == 1){
        cout << "You chose easy mode!" << endl;
    } else{
        cout << "You chose hard mode!" << endl;
    }

    return difficulty;
}

int easyMode(int choice, int health, int round){
    switch(choice){ //Depending on the choice, the case will be chosen
        case 1:{ //Fight
            cout << "\nBeware! Enemies approaching!\n";
            for(int row = 0; row < round; row++){
                for(int column = 0; column < 5; column++){
                    cout << "#";
                }
                cout << endl;
            }
            int damage = rand() % 4 + 1; // Random value and a local variable (can't be accessed beyond case 1)
            health -= damage;
            cout << "You took " << damage << " damage!" << endl;
            return health;
        }

        case 2:{ //Rest
            health += 2;
            cout << "You've recovered 2 health. \n";
            return health;
        }
    }
}

int hardMode(int choice, int health, int round){
    switch(choice){ //Depending on the choice, the case will be chosen
        case 1:{ //Fight
            cout << "\nBeware! Enemies approaching!\n";

            for(int row = 0; row < round; row++){
                for(int column = 0; column < 5; column++){
                    cout << "#";
                }
                cout << endl;
            }
            int damage = rand() % 5 + 1; // Random value and a local variable (can't be accessed beyond case 1)
            health -= damage;
            cout << "You took " << damage << " damage!" << endl;
            return health;
        }
        case 2:{ //Rest
            health ++;
            cout << "You cannot rest for long enemies are nearby!" << endl;
            cout << "You've recovered 1 health.\n";
            return health;
        }
    }
}

enum GameState checkEnd(int choice, int round, int health, GameState state){
    if(choice == 3){
        state = QUIT;
        cout << "\nYou quit the arena!!\n\n";
    } else if(health <= 0){
        state = LOST;
        cout << "\nYou were defeated by the arena!!\n\n";
    } else if(round > 5){
        state = WON;
        cout << "\nYou survived the arena!!\n\n";
    }else{
        state = PLAYING;
    }

    return state;
}

int main(){
    GameState state = PLAYING; // state is the name of the variable

    int health = 10, round = 1, attack = 5, choice;

    printWelcome();

    int num = levelDifficulty();
    
    if(num == 1){ //Same as playing regularly
        while(state == PLAYING){
            printStats(health, round, attack);
            choice = getValidChoice();
            health = easyMode(choice, health, round);
            state = checkEnd(choice, round, health, state);
            round++;
        }
    }else if(num == 2){
        while(state == PLAYING){
        printStats(health, round, attack);
        choice = getValidChoice();
        health = hardMode(choice,health, round);
        state = checkEnd(choice, round, health, state);
        round++;
        }
    }
        

}