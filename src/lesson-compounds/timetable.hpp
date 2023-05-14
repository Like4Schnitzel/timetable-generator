#pragma once

#include "week.hpp"
#include <vector>

class TimeTable
{
public:
    TimeTable();

    Week getWeek(int);
    void addWeek(Week);
private:
    std::vector<Week> weeks;
};