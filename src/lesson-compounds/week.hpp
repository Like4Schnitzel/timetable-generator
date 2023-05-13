#pragma once

#include "day.hpp"

class Week {
public:
    Week();
    ~Week();

    Day getDay(int);
    void setDay(int, Day);
private:
    Day* days;
};