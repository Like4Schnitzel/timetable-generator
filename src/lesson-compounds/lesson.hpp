#pragma once

class Lesson;

#include "../class.hpp"
#include "../teacher.hpp"
#include "../subject.hpp"
#include "../room.hpp"
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