#pragma once

#include "../class.hpp"
#include "../teacher.hpp"
#include "../subject.hpp"
#include <iostream>

class Lesson {
public:
    Lesson();
    Lesson(Class, Teacher, Subject);

    Class getClass();
    Teacher getTeacher();
    Subject getSubject();
private:
    Class where;
    Teacher who;
    Subject what;
};