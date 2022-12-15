#include <iostream>
#include <vector>

#include "headers/tools.h"
#include "headers/menu.h"
#include "headers/data.h"

using namespace std;
using namespace Tools;


void Menu::mainMenu(){
    cout << "Welcome to AlarmCLI!\n\n" << endl;
    cout << "Select an option: " << endl;
    cout << "1 - New alarm" << endl;
    cout << "2 - Existing alarms" << endl;
    cout << "3 - Manage ringtones" << endl;
    cout << "4 - Exit" << endl;
}


void Menu::addNameMenu(){
    cout << "Enter a name for your new alarm: " << endl;
    cout << "Type quit to exit\n\n" << endl;
}


void Menu::addTimeMenu(){
    cout << "Enter time for your alarm in this format: HH:MM" << endl;
    cout << "Type quit to exit\n\n" << endl;
}


void Menu::addRingtoneMenu(){
    Data::ringtoneNames = readFilesInDirectory("ringtones");
    int counter = 1; 

    cout << "Choose a ringtone to play (by number): \n\n" << endl;

    for (string & file : Data::ringtoneNames) {
        cout << counter << ". " << file << endl;
        counter += 1;
    }

    cout << "\n\n" << endl;
}


void Menu::repeatedOnMenu(){
    cout << "What days should your alarm be repeated on?(1-8)\n\n" << endl;

    cout << "mon - Monday" << endl;
    cout << "tue - Tuesday" << endl;
    cout << "wed - Wednesday" << endl;
    cout << "thu - Thursday" << endl;
    cout << "fri - Friday" << endl;
    cout << "sat - Saturday" << endl;
    cout << "sun - Sunday" << endl;
    cout << "quit - Quit" << endl;

    cout << "\n\n" << endl;
}


void Menu::existingAlarmsMenu(){
    
}