#include "room.hpp"

Room::Room(std::string name, TimeTable* timetable)
{
    this->name = name;
    this->timetable = timetable;
}

std::string Room::getName()
{
    return name;
}

TimeTable* Room::getTimeTable()
{
    return timetable;
}