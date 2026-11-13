#include <iostream>
using namespace std;

#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
   
    

    
    void acceptTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    
    void displayTime() const {
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }

    
    Time addTime(const Time& t2) const {
        Time result;

       
        int totalSeconds = seconds + t2.seconds;
        result.seconds = totalSeconds % 60;
        int extraMinutes = totalSeconds / 60;

        
        int totalMinutes = minutes + t2.minutes + extraMinutes;
        result.minutes = totalMinutes % 60;
        int extraHours = totalMinutes / 60;

       
        result.hours = hours + t2.hours + extraHours;

        return result;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "--- Enter First Time ---" << endl;
    t1.acceptTime();

    cout << "\n--- Enter Second Time ---" << endl;
    t2.acceptTime();

    // Add t1 and t2
    t3 = t1.addTime(t2);

    cout << "\nFirst Time  : ";
    t1.displayTime();

    cout << "Second Time : ";
    t2.displayTime();

    cout << "Total Time  : ";
    t3.displayTime();

    return 0;
}

