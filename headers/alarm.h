#ifndef ALARM_H
#define ALARM_H
#include <iostream>

using namespace std;

class Alarm {

    public: 
        string name; 
        string time; 
        string ringtonePath;
        string repeatedOn;
        bool active;


        Alarm(
            string name, 
            string time, 
            string ringtonePath, 
            string repeatedOn,
            bool active
        );


        ~Alarm();
};

#endif