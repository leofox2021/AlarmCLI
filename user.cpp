#include <iostream>

#include "headers/user.h"

using namespace std; 


User::User(){
    this->setMenu("main");
    cout << "User constructor has been accessed!" << endl;
}


void User::setAllFalse() {
    this->isInMainMenu = false;
    this->isInCreationMenu = false;
    this->isInDeletionMenu = false;
    this->isInEditingMenu = false;
    this->isInListedMenu = false;
    this->isInRingtoneMenu = false;

    this->isAddingName = false;
    this->isAddingTime = false;
    this->isAddingRingtone = false;
    this->isAddingRepetition = false; 

    this->currentAlarmName = "none";
    this->currentAlarmTime = "none";
    this->currentAlarmRingtone = "none";
    this->currentAlarmRepetition = "none";
}


void User::setActionsFalse(){
    this->isAddingName = false;
    this->isAddingTime = false;
    this->isAddingRingtone = false;
    this->isAddingRepetition = false; 
}



void User::setMenu(string menu){
    if (menu == "main") {
        this->setAllFalse();
        this->isInMainMenu = true;
    }

    else if (menu == "creation") {
        this->setAllFalse();
        this->isInCreationMenu = true;
        this->setAction("name");
    }

    else if (menu == "deletion") {
        this->setAllFalse();
        this->isInDeletionMenu = true;
    }

    else if (menu == "editing") {
        this->setAllFalse();
        this->isInEditingMenu = true;
    }

    else if (menu == "listed") {
        this->setAllFalse();
        this->isInListedMenu = true;
    }

    else if (menu == "ringtone") {
        this->setAllFalse();
        this->isInRingtoneMenu = true;
    }
}


void User::setAction(string action){
    if (action == "name") {
        this->setActionsFalse();
        this->isAddingName = true;
    }

    else if (action == "time") {
        this->setActionsFalse();
        this->isAddingTime = true;
    }

    else if (action == "ringtone") {
        this->setActionsFalse();
        this->isAddingRingtone = true;
    }

    else if (action == "repetition") {
        this->setActionsFalse();
        this->isAddingRepetition = true;
    }
}


User::~User(){}
