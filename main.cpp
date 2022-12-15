/*
*   The main file that runs the program
*   Compile command:
*   app main.cpp tools.cpp menu.cpp user.cpp alarm.cpp modeManager.cpp -lstdc++fs
*   Run on Manajro Linux (dec. 2022 Acer):
*   '/home/leo/C++/inManegeProejct/app'
*/

#include <iostream>
#include <string>
#include <vector>
#include <thread>

#include "headers/tools.h"
#include "headers/menu.h"
#include "headers/user.h"
#include "headers/alarm.h"
#include "headers/modeManager.h"

using namespace std;
using namespace Tools;
using namespace Menu;
using namespace ModeManager;


int main() {
    User currentUser = User();
    
    while (true) {
        manage(currentUser);
    }
    return 0;
}
