#pragma once

class Teacher;

#include "../lesson-compounds/timetable.hpp"
#include <string>

class Teacher {
public:
    Teacher();
    Teacher(std::string);

    std::string getName();
    TimeTable* getTimeTable();
private:
    std::string name;
    TimeTable* timetable;
};
