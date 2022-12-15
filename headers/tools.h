#ifndef TOOLS_H
#define TOOLS_H
#include <iostream>

using namespace std;

namespace Tools {

    string getTime();

    void writeToDatabase(string name, string date, string number);

    void readFromDatabase();

    vector<string> readFilesInDirectory(string directoryToRead);

    bool correctTimeCheck(string time);
}

#endif