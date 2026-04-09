#include <iostream>
#include <memory>
#include <cstring>


using namespace std;

// If your class manually manages Heap memory, meaning you wrote a destructor
// you almost certainly need to also write a copy constructor and a copy assignment operator

class Student{
    public:
        string name; // string handles it's own memory
        int id;
        Student(string n, int i) : name(n), id(i){}
    
        
    /*
    private: 
        string name; // string handles it's own memory 
        char* name; // Heap-allocated...
        int id;
    public:
        Student(const char* n, int i){
            id = i;
            name = new char[strlen(n) + 1]; 
            // strlen counts the characters but not the null character at the end so you need to add 1
            strcpy(name, n);
            // strcpy copies every character, including the null terminator, into our new array 
        }
        // A copy constructor that creates a deep copy
        // Gives other its own Heap allocation
        Student(const Student& other){ // Copy constructor
            id = other.id;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name); // Copy content
        }
        // Copy assingment operator...
        // Self-assignment function, so if = operator is used this overrides other functions
        Student& operator=(const Student& other){
            if(this == &other)
                return *this;   // Self-assingment
            delete[] name;
            id = other.id;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);

            return *this;
        }
        // Destroyer functions belong after the constructors
        // The destructor has no return type and no parameters; also called automatically
        // ~ is the start of a destroyer function
        ~Student(){ // Destructor
            cout << "Destroying " << name << endl;
            delete[] name; // Freed the heap memory...
            name = nullptr;
        }
    */
        // A special method that runs automatically when an object is destroyed
        void print() const{
            cout << "Student: " << name << "(ID: " << id << ")" << endl;
        }
};

int main(){
    // unique_ptr - One owner, deleted automatically...
    // You can transfer ownership with move(), but you cannot copy it
    // No destructor, no copy constructor, or no copy assingment operator needed
    unique_ptr<Student> s1 = make_unique<Student>("Alice", 101);
    s1->print(); // -> is used for unique_ptr

    // Transfer ownership...
    unique_ptr<Student> s2 = move(s1);
    s2->print();

    // Shared_ptr - Muliple owners, delete when last owner dies...
    shared_ptr<Student> s3 = make_shared<Student>("Bob", 102);
    shared_ptr<Student> s4 = s3; // Both own this now.
    s3->print();
    s4->print();


    /*
    Student s1("Alice", 101);
    Student s2("Bob", 102); // Copy of s1
    s2 = s1; // Assignment ... DIFFERENT from initialization

    s1.print();
    s2.print();

    
    // Stack -- Automatic, fast, dies when scope ends...
    int x = 5;
    double arr[3] = {1.0, 2.0, 3.0};

    // Heap -- Manual, and live until you delete it...
    int* y = new int(42);
    double* arr2 = new double[3];

    delete y;
    delete [] arr2;
    */
}