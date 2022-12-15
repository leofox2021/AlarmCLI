#ifndef MODEMANAGER_H
#define MODEMANAGER_H

#include <iostream>
#include "user.h"

using namespace std;

namespace ModeManager {

    void manage(User user);

    void onMainMenu(User user);

    void onCreationMenu(User user);

    void onListedMenu(User user);

    void onRingtoneMenu(User user);
};

#endif