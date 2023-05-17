#pragma once

class Lesson;

#include "../school-parts/class.hpp"
#include "../school-parts/teacher.hpp"
#include "../school-parts/subject.hpp"
#include "../school-parts/room.hpp"
#include <iostream>

class Lesson {
public:
    Lesson();
    Lesson(Class*, Teacher*, Subject*, Room*);

    Class* getClass();
    Teacher* getTeacher();
    Subject* getSubject();
    Room* getClassRoom();
private:
    Class* className;
    Teacher* teacher;
    Subject* subject;
    Room* classRoom;
};