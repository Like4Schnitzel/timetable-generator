#pragma once

class Room;

#include "lesson-compounds/timetable.hpp"
#include <string>

class Room {
public:
    Room(std::string, TimeTable*);

    std::string getName();
    TimeTable* getTimeTable();
private:
    std::string name;
    TimeTable* timetable;
};