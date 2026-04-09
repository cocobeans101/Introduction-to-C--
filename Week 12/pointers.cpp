#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int id;
        Student(string n, int i) : name(n), id(i){}
        void print() const{
            cout << name << "(ID: " << id << ")" << endl;
        }
}; // Class definition needs a semicolon

int main(){
    int n = 3;

    Student* s = new Student("Alice", 101); // Creates a new Student object

    s->print(); // Student s with -> uses the function

    cout << s->name << endl; // s->name gives you the actual s name
    cout << (*s).id; // (*s).id gives the same result

    delete s; // [] are exclusively for array so you don't need them for objects

    Student* roster = new Student[n]{
        Student("Alice", 101), // Calls the Student constructor
        Student("Bob", 102),
        Student("Carol", 103) 
    }; // Creates a Student array called roster

    for(int i = 0; i < n; i++){
        roster[i].print(); // Prints each individual Student 
    }

    delete[] roster;

    // int n;

    // int size = 0, capacity = 2;
    // double input;
    
    // cout << "How many scores?";
    // cin >> n;

    // // double* scores means this variable will store the location of some double
    // // * means storing the locations
    // double* scores = new double[n];

    // for(int i = 0; i < n; i++){
    //     cout << "Enter score: " << i + 1 << ":";
    //     cin >> scores[i];
    // }

    // for(int i = 0; i < n; i++){
    //     cout << "scores[" << i << "]=" << scores[i] << endl;
    // }

    // delete[] scores;

    // double* newArray = new double[n + 1];

    // for(int i = 0; i < n; i++){
    //     newArray[i] = scores[i];
    // }

    // scores = newArray;
    // n += 1;

    // cout << "Enter the bonus scorres: ";
    // cin >> scores[n - 1];

    // while(cin >> input && input >= 0){
    //     if(size == capacity){
    //         capacity *= 2; // Increasing capacity...
    //         double* newArray = new double[capacity]; // Creating new array...
    //          for(int i = 0; i < n; i++){ // Copying from old array to new array...
    //             newArray[i] = scores[i];
    //         }
    //         delete[] scores; // Deleting old array...
    //         scores = newArray; // Assigning old pointer to new pointer
    //     }
    //     scores[size] = input;
    //     size++; // Updating size...
    // }
}

// To group comment use Command, fn, /