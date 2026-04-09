#include <iostream>

using namespace std;

/*
If a function has to return two values. Your first instinct should be whether you can split it into two seperate funcitons.
Pass-by-reference makes sense when the outputs are fundamentally intertwined.
Never assign a pass-by value parameter inside a function body as it misleads the readers into thinking your updating the original variable and cause bugs.
Just use local variables instead.
*/

void convHrMin(int timeVal, int &hrVal, int &minVal){
    // int timeVal is just making a copy of the timeVal and won't change the value outside the function
    // int &hrVal are no longer local values and the changes will affect the variable outside the function

    hrVal = timeVal / 60;
    minVal = timeVal % 60;
}

// const string& modStr stops any changes to the variable
void strSpaceToHyphen(string& modStr){
    // The & on the string because without it; the funciton will create a copy and then discard it
    for(int i = 0; i < modStr.size(); i++){
        if(modStr.at(i) == ' '){
            modStr.at(i) = '-';
        }
    }
}

void toUpperCase(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }
}

int main(){
    char userWord[] = "hello";
    toUpperCase(userWord);
    cout << userWord;
    
    
    
    /*
    For void strSpaceToHyphen(string& modStr):
    string userStr;
    cout << "\nEnter string with spaces: ";
    getline(cin, userStr);
    strSpaceToHyphen(userStr); // userStr will remain unchanged
    cout << "String with hyphens: " << userStr << endl << endl;


    For convHrMin(int timeVal, int &hrVal, int &minVal):
    int totTime = 156, usrHr = 0, usrMin = 0;
    convHrMin(totTime, usrHr, usrMin);
    cout << "\n" << usrHr << " hrs " << usrMin << " mins " << endl << endl;
    
    int userValInt;
    int& userValRef = userValInt; // This is an alias

    cin >> userValInt;
    cout << userValRef << endl;

    userValInt = 99;
    cout << userValRef << endl;*/


    return 0;
}

