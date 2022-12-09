#include <iostream>
#include <vector>

#include "headers/tools.h"
#include "headers/menu.h"
#include "data.cpp"

using namespace std;
using namespace Tools;


void Menu::mainMenu(){
    cout << "Welcome to AlarmCLI!\n\n" << endl;
    cout << "Select an option: " << endl;
    cout << "1 - New alarm" << endl;
    cout << "2 - Existing alarms" << endl;
    cout << "3 - Manage ringtones" << endl;
}


void Menu::addNameMenu(){
    cout << "Enter a name for your new alarm: \n\n" << endl;
}


void Menu::addTimeMenu(){
    cout << "Enter time for your alarm in this format: HH:MM\n\n" << endl;
}


void Menu::addRingtoneMenu(){
    vector<string> filesInDirectory = readFilesInDirectory("ringtones");
    int counter = 1; 

    cout << "Choose a ringtone to play (by number): \n\n" << endl;

    for (string & file : filesInDirectory) {
        cout << counter << ". " << file << endl;
        counter += 1;
    }
}


void Menu::repeatedOnMenu(){
    cout << "What days should your alarm be repeated at?\n\n" << endl;

    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;
    cout << "4. Thursday" << endl;
    cout << "5. Friday" << endl;
    cout << "6. Saturday" << endl;
    cout << "7. Sunday" << endl;
}


void Menu::existingAlarmsMenu(){
    
}