#pragma once

#include <string>
#include <assert.h>

class Subject {
public:
    Subject();
    Subject(std::string, int);

    std::string getName();
    int getAmount();
private:
    std::string name;
    int preferredAmount;
};