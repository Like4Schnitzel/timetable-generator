#pragma once

#include "lesson.hpp"
#include <ctime>

class Day {
public:
    Day();
    ~Day();

    Lesson getLesson(int);
    void setLesson(int, Lesson);

    time_t getDate();
    void setDate(time_t);
private:
    Lesson* lessons;
    time_t date;
};