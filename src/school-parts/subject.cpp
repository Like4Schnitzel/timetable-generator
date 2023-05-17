#include "subject.hpp"

Subject::Subject() {}

Subject::Subject(std::string name, int preferredAmount)
{
    this->name = name;
    this->preferredAmount = preferredAmount;
}

std::string Subject::getName() 
{
    return name;
}

int Subject::getAmount() 
{
    return preferredAmount;
}