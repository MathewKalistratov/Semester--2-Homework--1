// Copyright 2015 <Matvey Kalistratov>
#include "EmployeeAlreadyExist.h"

EmployeeAlreadyExist::EmployeeAlreadyExist(const Employee& name) : exception() {
    std::ostringstream stream;
    stream << name.getName();
}

const char* EmployeeAlreadyExist::what() const throw() {
    return message.c_str();
}
