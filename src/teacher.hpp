#pragma once

#include "subject.hpp"
#include <string>

class Teacher {
public:
    Teacher();
    Teacher(std::string, Subject*);

    std::string getName();
    Subject* getSubjects();
private:
    std::string name;
    Subject* taughtSubjects;
};