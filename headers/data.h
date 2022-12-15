#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>

#include "alarm.h"

using namespace std;

namespace Data {
    
    enum Weekdays {
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY, 
        FRIDAY, 
        SATURDAY, 
        SUNDAY
    };

    static vector<Alarm> Alarms;
    static vector<string> ringtoneNames;
};

#endif