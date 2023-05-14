#include "lesson.hpp"

Lesson::Lesson() {}

Lesson::Lesson(Class* taughtClass, Teacher* teacher, Subject* subject, Room* room)
{
    this->className = taughtClass;
    this->teacher = teacher;
    this->subject = subject;
    this->classRoom = room;
}

Class* Lesson::getClass()
{
    return className;
}

Teacher* Lesson::getTeacher()
{
    return teacher;
}

Subject* Lesson::getSubject()
{
    return subject;
}

Room* Lesson::getClassRoom()
{
    return classRoom;
}