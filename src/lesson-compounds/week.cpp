#include "week.hpp"

Week::Week() 
{
    days = new Day [7];
}

Week::~Week()
{
    delete[] days;
}

Day Week::getDay(int index)
{
    return days[index];
}

void Week::setDay(int index, Day day)
{
    days[index] = day;
}