#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;

class User {

    public: 
        bool isInMainMenu;
        bool isInCreationMenu;
        bool isInDeletionMenu;
        bool isInEditingMenu;
        bool isInListedMenu;
        bool isInRingtoneMenu;

        bool isAddingName;
        bool isAddingTime;
        bool isAddingRingtone;
        bool isAddingRepetition;
        
        string currentAlarmName;
        string currentAlarmTime;
        string currentAlarmRingtone;
        string currentAlarmRepetition;


        // Constructor
        User();

        
        // Set all fields to false
        void setAllFalse();
        

        void setActionsFalse();


        void setAlarmParametersFalse();


        // Available arguments:
        // main
        // creation
        // deletion
        // editing
        // listed
        // ringtone
        void setMenu(string menu);


        // Available arguments: 
        // name
        // time
        // ringtone
        // repetition
        void setAction(string action);


        // Available arguments
        // name
        // time
        // ringtone
        // repetition
        void setParameter(string parameter, string value);


        // Destructor
        ~User();    
};

#endif