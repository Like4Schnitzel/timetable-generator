#include "timetable.hpp"

TimeTable::TimeTable() {}

Week TimeTable::getWeek(int index)
{
    return weeks[index];
}

void TimeTable::addWeek(Week week)
{
    weeks.push_back(week);
}