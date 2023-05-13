#pragma once

#include "lesson.hpp"

class Day {
public:
    Day();
    ~Day();

    Lesson getLesson(int);
    void setLesson(int, Lesson);
private:
    Lesson* lessons;
};