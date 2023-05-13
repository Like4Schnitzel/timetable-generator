#include "lesson.hpp"

Lesson::Lesson() {}

Lesson::Lesson(Class taughtClass, Teacher teacher, Subject subject)
{
    this->where = taughtClass;
    this->who = teacher;
    this->what = subject;
}

Class Lesson::getClass()
{
    return where;
}

Teacher Lesson::getTeacher()
{
    return who;
}

Subject Lesson::getSubject()
{
    return what;
}