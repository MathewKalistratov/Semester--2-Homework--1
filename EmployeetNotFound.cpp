// Copyright 2015 <Matvey Kalistratov>
#include <string>
#include "EmployeeNotFound.h"

EmployeeNotFound::EmployeeNotFound(const Employee& name) : exception() {
    ostringstream stream;
    stream << name.getName() << " not found :(";
    message = stream.str();
}

EmployeeNotFound::EmployeeNotFound(int i) {
    std::ostringstream stream;
    stream << "Employee number " << i << " not found!";
    message = stream.str();
}

const char* EmployeeNotFound::what() const throw() {
    return message.c_str();
}




