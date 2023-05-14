#include "class.hpp"

Class::Class(TimeTable* timetable, Room* room, std::string name)
{
    this->timetable = timetable;
    this->room = room;
    this->name = name;
}

TimeTable* Class::getTimeTable()
{
    return timetable;
}

Room* Class::getRoom()
{
    return room;
}

std::string Class::getName()
{
    return name;
}