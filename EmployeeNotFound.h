// Copyright 2015 <Matvey Kalistratov>
#pragma once
#include <string>
#include <sstream>
#include <exception>
#include "Employee.h"
using std::list;
using std::cout;
using std::cin;
using std::ostream;
using std::endl;
using std::exception;
using std::string;
using std::iostream;
using std::ostringstream;

class EmployeeNotFound : public exception {
    string message;

 public:
    explicit EmployeeNotFound(const Employee& name);
    explicit EmployeeNotFound(int i);
    virtual const char* what() const throw();
};
