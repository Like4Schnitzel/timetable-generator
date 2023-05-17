#include "teacher.hpp"

Teacher::Teacher() {}

Teacher::Teacher(std::string name)
{
    this->name = name;
}

std::string Teacher::getName()
{
    return name;
}

TimeTable* Teacher::getTimeTable()
{
    return timetable;
}