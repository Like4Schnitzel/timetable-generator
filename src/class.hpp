#pragma once

class Class;

#include "lesson-compounds/timetable.hpp"
#include <string>

class Class {
public:
    Class(TimeTable*, Room*, std::string);

    TimeTable* getTimeTable();
    Room* getRoom();
    std::string getName();
private:
    TimeTable* timetable;
    Room* room;
    std::string name;
};