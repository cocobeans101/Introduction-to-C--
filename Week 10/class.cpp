#include <iostream>
#include <string>

using namespace std;

class RunnerInfo{ // Makes a class called Runnerinfo
    public: // Creates public info so everyone can change it
        void setTime(int timeRunSecs){
            if(isValid(timeRunSecs))
                timeRun = timeRunSecs;
        }
            
        void setDistance(double distRunMiles){
            if(isValid(distRun))
                distRun = distRunMiles;
        }
        double getSpeedMph();

    private: // Creates a private data member
        int timeRun;
        double distRun;

        // Private helper function...
        bool isValid(double val){return val >= 0;};
        // Returns val if the val is greater than or equal to zero
}; // Classes have to have a semi colon after the brace

/*
void RunnerInfo::setTime(int timeRunSecs){
    // Void is used to declare something in a class
    // You must include class name when calling and use ::
    // :: is a scope resolution
 
    timeRun = timeRunSecs;
} 

void RunnerInfo::setDistance(double distRunMiles){
    distRun = distRunMiles;
}
*/

double RunnerInfo::getSpeedMph(){
    return distRun / (timeRun / 3600.0); // Logic is hidden from the user...
}

int main(){
    RunnerInfo runner1, runner2; // Creates an object named runner1
    runner1.setTime(360); // Uses a class function
    runner1.setDistance(1.2);
    cout << "Runner 1 speed: " << runner1.getSpeedMph() << " MPH" << endl;

    runner2.setTime(350);
    runner2.setDistance(1.3);
    cout << "Runner 2 speed: " << runner2.getSpeedMph() << " MPH" << endl;
}