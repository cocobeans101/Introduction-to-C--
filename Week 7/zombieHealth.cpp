/*
    Spring Break Zombie Survival Helper
    -----------------------------------
    Topic: User-Defined Functions (Week 7–8)
    Concepts:
      - Function declarations (prototypes)
      - Function definitions
      - Parameters and return values
      - Void (print) functions
      - Functions with branches (if/else)
      - Functions with loops
      - Simple "unit test" style checking

    Story:
      It's Spring Break. Everything was fun until...
      a zombie outbreak started on the beach.

      This program helps the user estimate:
        - average zombies seen per day
        - danger rating based on zombie sightings
        - total zombies over several days
        - a rough "survival chance" percentage
        - bool ShouldRun(int zombiesBehindYou)
        - void Warn() → prints a dramatic message
*/
#include <iostream>
#include <cstdlib>
using namespace std;

// Function declarations go here...
void printIntro();
void printStats(int health, int day, int numZombies);
void Warn();
int zombiePerDay();
int dangerRating(int zombies);
int totalZombieCount(int numZombies, int zombies);
void survivalChance(int danger);
bool ShouldRun(int zombiesBehindYou);
int getValidChoice();
int survivalHelper(int choice, int health, int zombies);
int checkEnd(int choice, int day, int health, int num);
int runAway(bool run, int health);


int main() {
  int health = 100, day = 1, numZombies = 0, num = 0;
    cout << "=== SPRING BREAK ZOMBIE SURVIVAL HELPER ===" << endl;
    printIntro();
    while(num == 0){
      printStats(health, day, numZombies);
      int zombies = zombiePerDay();
      int dangerLevels = dangerRating(zombies);
      numZombies = totalZombieCount(numZombies, zombies);
      survivalChance(dangerLevels);
      int choice = getValidChoice();
      health = survivalHelper(choice, health, zombies);
      int zombiesBehindYou = rand() % 2 + 1;
      bool run = ShouldRun(zombiesBehindYou);
      health = runAway(run, health);
      num = checkEnd(choice, day, health, num);
      day++;
    }
    return 0;
}



void printIntro(){ // Prints intro
  cout << "\nYou were hoping for a relaxing spring break at the beach..." << endl;
  cout << "But suddenly, zombie outbreak sirens start blaring!!" << endl;
  cout << "You decide to track zombie sightings and estimate your chance to survival." << endl;
  cout << "Let's begin!\n";
}

void Warn(){ // Prints warning
  cout << "Be careful!!!" << endl;
  cout << "There are zombies nearby!!!" << endl;
}

void printStats(int health, int day, int numZombies){
    cout << "\n----------------------------\n";
    cout << "Day: " << day << endl;
    cout << "Health: " << health << endl;
    cout << "Total zombies seen: " << numZombies << endl << endl;
}

int zombiePerDay(){ // Average zombies seen per day
  int zombie = rand() % 25 + 1;
  cout << "There are about " << zombie << " zombies seen today!" << endl;
  return zombie;
}

int dangerRating(int zombies){ // danger rating based on zombie sightings
  cout << "\n-----Danger levels-----" << endl;
  cout << "1. 0-5 zombies sightings" << endl;
  cout << "2. 6-10 zombie sightings" << endl;
  cout << "3. 11-15 zombie sightings" << endl;
  cout << "4. 16-20 zombie sightings" << endl;
  cout << "5. 21-25 zombie sightings" << endl;
  int rating = 0;
  
  if(zombies <= 5){
    rating = 1;
    cout << "Danger level: 1" << endl;
  } else if(zombies <= 10){
    rating = 2;
    cout << "Danger level: 2" << endl;
  } else if(zombies <= 15){
    rating = 3;
    cout << "Danger level: 3" << endl;
  } else if(zombies <= 20){
    rating = 4;
    cout << "Danger level: 4" << endl;
  } else if(zombies <= 25){
    rating = 5;
    cout << "Danger level: 5" << endl;
  }
  return rating;
}

int totalZombieCount(int numZombies, int zombies){ // Counts total number of zombies
  numZombies += zombies;
  return numZombies;
}

void survivalChance(int danger){ // Prints survival chance
  cout << "\n-----Survival Chance-----" << endl;
  if(danger == 1){
    cout << "You have an 80% chance of survival" << endl;
  } else if(danger == 2){
    cout << "You have a 60% chance of survival" << endl;
  } else if(danger == 3){
    cout << "You have a 40% chance of survival" << endl;
  } else if(danger == 4){
    cout << "You have a 20% chance of survival" << endl;
  }  else if(danger == 5){
    cout << "You have a 1% chance of survival" << endl;
    cout << "Do not go outside!!!";
  }
}


bool ShouldRun(int zombiesBehindYou){
  cout << "\nYou feel someone is behind you" << endl;
  bool truth = false;
  if(zombiesBehindYou == 1){
    cout << "There is a zombie behind you!!!" << endl;
    truth = true;
  } else if(zombiesBehindYou == 2){
    cout << "You're paranoid! There is no one here!" << endl;
    truth = false;
  }
  return truth;
}

int getValidChoice(){ 
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


int survivalHelper(int choice, int health, int zombies){
  switch(choice){
    case 1:{
      cout << "\nYou chose to fight " << zombies << " zombies!!" << endl;
      int damage = rand() % 5;
      damage *= zombies;
      health -= damage;
      cout << "You took " << damage << " damage!" << endl;
      return health;
    }
    case 2:{
      cout << "\nYou chose to rest" << endl;
      int resting = rand() % 5;
      health += resting;
      cout << "You gained " << resting << " health!" << endl;
      return health;
    }
  }
}

int checkEnd(int choice, int day, int health, int num){
  if(choice == 3){
    cout << "\nYou gave up!!!" << endl << endl;
    num = 1;
  } else if(health <= 0){
    cout << "\nYou have turned into a zombie!!!" << endl << endl;
    num = 1;
  } else if(day ==7){
    cout << "\nYou have survived for a week!!!" << endl;
    cout << "Now you don't need my help anymore! You can now protect yourself!" << endl << endl;
    num = 1;
  } else{
    num = 0;
  }
  return num;
}

int runAway(bool run, int health){
  if(run == true){
    int damage = rand() % 5;
    cout << "while running you took " << damage << " damage";
    health -= damage;
  }
  return health;
}