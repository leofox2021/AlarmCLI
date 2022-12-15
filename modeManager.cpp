#include <iostream>
#include <vector>

#include "headers/modeManager.h"
#include "headers/menu.h"
#include "headers/user.h"
#include "headers/data.h"
#include "headers/tools.h"
#include "headers/alarm.h"

using namespace std;
using namespace Menu;
using namespace Tools;


void ModeManager::manage(User user){
    if (user.isInMainMenu) 
        onMainMenu(user);
    else if (user.isInCreationMenu) 
        onCreationMenu(user);
}


void ModeManager::onMainMenu(User user){
    string command;
    int commandInt;

    mainMenu();

    cin >> command;
    
    commandInt = stoi(command);

    switch (commandInt) {

        case (1):
            user.setMenu("creation");
            break;

        case (2):
            user.setMenu("listed");

        case (3):
            user.setMenu("ringtone");

        case (4):
            exit(1);

        default:
            cout << "Please enter a valid number!\n\n" << endl;
    }
}


void ModeManager::onCreationMenu(User user){
    string command;
    string ringtone;
    string days;
    int commandInt;

    if (user.isAddingName) {
        addNameMenu();
        cin >> command;

        user.currentAlarmName = command;
        user.setAction("time");
    }

    else if (user.isAddingTime) {
        addTimeMenu();
        cin >> command;

        if (correctTimeCheck(command)) {
            user.currentAlarmTime = command;
            user.setAction("ringtone");
        }
        else {
            cout << "Enter correct time!" << endl;
        }
    }

    else if (user.isAddingRingtone) {
        addRingtoneMenu();
        cin >> command;
        commandInt = stoi(command);

        if (commandInt <= Data::ringtoneNames.size()) {
            ringtone = Data::ringtoneNames[commandInt - 1];
            user.currentAlarmRingtone = ringtone;
        }
        else {
            cout << "Enter a valid ringtone number!" << endl;
        }
    }

    else if (user.isAddingRepetition) {
        repeatedOnMenu();
        cin >> command;
        
        if (command.find("quit") != string::npos)
            exit(1);
        if (command.find("mon") != string::npos) 
            days += "Mon ";
        if (command.find("tue") != string::npos) 
            days += "Tue ";
        if (command.find("wed") != string::npos)
            days += "Wed ";
        if (command.find("thu") != string::npos)
            days += "Thu ";
        if (command.find("fri") != string::npos)
            days += "Fri ";    
        if (command.find("sat") != string::npos)
            days += "Sat ";        
        if (command.find("sun") != string::npos)
            days += "Sun ";    

        user.currentAlarmRepetition = days;

        Data::Alarms.emplace_back(Alarm(
            user.currentAlarmName, 
            user.currentAlarmTime, 
            user.currentAlarmRingtone, 
            user.currentAlarmRepetition, 
            true
        ));
    }
}

