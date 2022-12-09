#include <iostream>
#include <vector>

#include <headers/alarm.h>

using namespace std;

struct Data {
    
    enum Weekdays {
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY, 
        FRIDAY, 
        SATURDAY, 
        SUNDAY
    };

    vector<Alarm> Alarms;
};