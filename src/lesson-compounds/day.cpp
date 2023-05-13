#include "day.hpp"

Day::Day() {
    lessons = new Lesson [24];
}

Day::~Day() {
    delete[] lessons;
}

Lesson Day::getLesson(int index)
{
    return lessons[index];
}

void Day::setLesson(int index, Lesson lesson)
{
    lessons[index] = lesson;
}