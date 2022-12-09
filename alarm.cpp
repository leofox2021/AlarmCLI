#include <iostream>

#include "headers/alarm.h"

using namespace std;

Alarm::Alarm(
    string name, 
    string time, 
    string ringtonePath, 
    string repeatedOn,
    bool active
) {
    this->name = name;
    this->time = time;
    this->ringtonePath = ringtonePath;
    this->repeatedOn = repeatedOn;
    this->active = active;
}


Alarm::~Alarm(){}