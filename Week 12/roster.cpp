#include <iostream>
#include <array>

using namespace std;

class Roster{
    public:
        Roster(){
            size = 0;
            capacity = 2;
            names = new string[capacity];
        }

        ~Roster(){
            delete[] names;
        }
        
        void add(string name){
            if(size == capacity){
                capacity *= 2;
                string* newNames = new string[capacity];
                for(int i = 0; i < size; i++){
                    newNames[i] = names[i];
                }
                delete[] names;
                names = newNames;
            }
            names[size] = name;
            size++;
        }

        void remove(int index){
            for(int i = index; i < size - 1; i++){
                names[i] = names[i + 1];
            }
            size--;
        }
        
        void print() const{
            for(int i = 0; i < size; i++){
                cout << names[i] << "(ID: " << i << ")" << endl;
            }
        }

    private:
        string* names;
        int size, capacity;
};

int main(){
    Roster student;

    student.add("Alice");
    student.add("Bob");
    student.add("Carol");

    cout << "\nPrints all the current students and their index: " << endl;

    student.print();

    cout << "\nPrints all current students after removing student at index 1: " << endl;

    student.remove(1);
    student.print();
}

