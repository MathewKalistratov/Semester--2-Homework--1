// Copyright 2015 <Matvey Kalistratov>
#pragma once
#include "Employee.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <list>
using std::list;
using std::cout;
using std::cin;
using std::ostream;
using std::endl;
using std::exception;
using std::string;

class Department {
 private:
    string depname;  // Department name
    list <Employee> employees;  // Number of employees there
    double summsalary;  // Summ salary of the employee
    bool coffeemachine;  // Availability of the coffeemachine there

 public:
    Department();
    ~Department();
    Department(const Department& copy);

    void remove(int number);
    void remove(const Employee& emp);
    void add(const Employee& number);
    bool has(const Employee& emp);
    void setDepName(const string& depname);
    const string getDepName();
    void setEmployees(list <Employee>);
    list <Employee> getEmployees();
    void setCoffeeMachine(const bool& coffeemachine);
    const bool getCoffeeMachine();
    void addDepartment(const string& depname, const bool coffeemachine);

    void changeDepartment();
    void printEmployees();

    void printDepartment();

    Department& operator=(const Department& right);
    bool operator==(const Department& right);
    const Employee& operator[](int i) const;
};
