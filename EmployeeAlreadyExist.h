// Copyright 2015 <Matvey Kalistratov>
#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Employee.h"

class EmployeeAlreadyExist : public exception {
    string message;

 public:
    explicit EmployeeAlreadyExist(const Employee& name);
    virtual const char* what() const throw();
};
