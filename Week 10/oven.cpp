#include <iostream>

using namespace std;

class Oven{
    public:
        void setTemperature(int t){
            if(safetyLimit(t))
                targetTemp = t;
        }
        void bake(){cout << "Baking at " << targetTemp << " degrees." << endl;};

    private: 
        int currentTemp, targetTemp;
        int safetyLimit(int t){
            if(t > 500)
                return 500;
            else if(t < 70)
                return 70;
            else
                return t;
        }
};

int main(){
    Oven oven1, oven2;
    int number;
    oven1.setTemperature(60);
    oven1.bake();

    cout << "Enter oven temperature: ";
    cin >> number;
    oven2.setTemperature(number);
    oven2.bake();
}
