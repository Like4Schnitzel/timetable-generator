#include "teacher.hpp"

Teacher::Teacher() {}

Teacher::Teacher(std::string name, Subject* subjects)
{
    this->name = name;
    this->taughtSubjects = subjects;
}

std::string Teacher::getName()
{
    return name;
}

Subject* Teacher::getSubjects()
{
    return taughtSubjects;
}