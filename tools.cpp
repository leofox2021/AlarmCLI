#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <vector>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include <experimental/filesystem>

#include "headers/tools.h"
#include "headers/data.h"

using namespace std;
using namespace boost;
namespace directory = std::experimental::filesystem;


string Tools::getTime() {
    time_t globalTime = time(nullptr);
    tm localTime = *localtime(&globalTime);

    ostringstream stream;
    stream << put_time(&localTime, "%d-%m-%Y %H-%M-%S");
    string timeString = stream.str();

    return timeString;    
}


void Tools::writeToDatabase(string name, string date, string number) {
    fstream database;
    string alarmData;

    alarmData = name + "," + date + "," + number;
    database.open("database.txt", ios::out);
    if (database.is_open()) database << alarmData;
    database.close();
}


void Tools::readFromDatabase() {
    fstream database;
    string line;

    database.open("database.txt", ios::in);

    if (database.is_open()) {
        while (getline(database, line)) {
            cout << line << endl;
        }
    }

    database.close();
}


vector<string> Tools::readFilesInDirectory(string directoryToRead) {
    vector<string> filePathSeparated;
    vector<string> filesInDirectory;
    string filePath;
    string fileName;
    int size;

    for (auto & file : directory::directory_iterator(directoryToRead)) {
        filePath = string(file.path());
        split(filePathSeparated, filePath, is_any_of("/"));
        size = filePathSeparated.size();
        fileName = filePathSeparated[size -1];
        filesInDirectory.emplace_back(fileName);
    }

    return filesInDirectory;
}


bool Tools::correctTimeCheck(string time) {
    vector<string> timeSeparated;
    int hours;
    int minutes;

    split(timeSeparated, time, is_any_of(":"));
    

    if (timeSeparated.size() == 2) {
        hours = stoi(timeSeparated[0]);
        minutes = stoi(timeSeparated[1]);

        try {
            if (hours < 24 && hours > -1 && minutes < 60 && minutes > -1) {
                return true;
            }
            else {
                return false;
            }
        }
        catch (std::exception ex){
            return false;
        }
    }
    else {
        return false;
    }
}


