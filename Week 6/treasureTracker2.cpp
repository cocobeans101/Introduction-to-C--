#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {10, 20, 30, 40}; // Initalizes your vector with the values you know it holds
    cout << "Last element: " << numbers.back() << endl; // vectorName.back() gives the last element in the vector
    numbers.pop_back(); // vectorName.pop_back() removes the last element of the vector

    cout << "\nAfter pop_back():\n";
    for(int i = 0; i < numbers.size(); i++){ // Prints each element in the vector
        cout << numbers[i] << " ";
    }
    
    cout << "\nAfter adding 5 to each element:\n";
    for(int i = 0; i < numbers.size(); i++){ // Prints each element in the vector
        numbers[i] += 5;
        cout << numbers[i] << " ";
    }

    vector <int> copy;

    copy = numbers;
    for(int i = 0; i < numbers.size(); i++){
        copy.push_back(numbers[i]);
    }

    cout << "Copy of numbers: " << endl;
    for(int i = 0; i < copy.size(); i++){ // Prints each element in the vector
        cout << copy[i] << " ";
    }

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    bool same = true;

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            same = false;
            break;
        }
    }

    if(same){
        cout << "Vectors match" << endl;
    }

    cout << "\n\nSwapped vectors...";
    vector<int> nums = {1, 2, 3, 4, 5};

    for(int i = 0; i < nums.size(); i++){
        int value = nums[i];
        nums[i] = nums[nums.size() - 1 - i];
        nums[nums.size() - 1 - i] = value;
    }

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    int grid[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << grid[i][j] << " ";
        }
    }
}
