#include <iostream>
#include <cstdlib>

using namespace std;

//Function declaration...
void printWelcome(); // Void returns nothing
void printStats(int health, int attack); // health and attack are the arguments
int choice(); // Returns an int function
int calculateDamage(int attack, int defense);
bool criticalHit();
int getValidChoice();

// Function defintions...
void printWelcome(){
    cout << "\nWelcome to THE ARENA OF DEATH!\n\n";
}

void printStats(int health, int attack){
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl;
}

int choice(){
    int num;
    cout << "\n1. Fight\n";
    cout << "2. Rest\n";
    cout << "3. Quit\n";
    cout << "Choose your path: ";
    cin >> num;

    return num; // Returns the variable you want to be returned
}

int calculateDamage(int attack, int defense){
    int damage;
    damage = attack - (defense / 2);
    if(damage < 0){
        damage = 0;
    }
    return damage;
}

bool criticalHit(){
    int roll = rand() % 100;
    if(roll < 20){
        return true;
    } else{
        return false;
    }
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

int main(){ // Main is a function
    int health = 1, attack = 10, path, defense = 5;

    printWelcome();
    printStats(health,attack);
    path = choice();

    cout << "Damage is: " << calculateDamage(attack, defense) << endl;
    cout << "Damage is: " << calculateDamage(45, 10) << endl;
    cout << "Damage is: " << calculateDamage(41, 13) << endl;
    cout << "Damage is: " << calculateDamage(1, 9) << endl;

    if(criticalHit()){
        cout << "That was a critical hit!" << endl;
    } else{
        cout << "You are okay... for now." << endl;
    }
}