// Copyright 2015 <Matvey Kalistratov>
#pragma once
#include <stdio.h>
#include <iostream>
#include <list>
#include <string>
using std::list;
using std::cout;
using std::cin;
using std::ostream;
using std::endl;
using std::exception;
using std::string;

class Employee {
 private:
    string name;  // Name of the employee
    int hours;  // How many hours employee works a day
    double salaryhour;  // Salary for an hour of the employee
    int age;  // Age of the employee

 public:
    Employee();
    Employee(const Employee&);
    ~Employee();

    void setName(const string&);
    const string& getName() const;
    void setSalary(const double&);
    const double getSalary() const;
    void setHours(const int&);
    const int getHours() const;
    void setAge(const int&);
    const int getAge() const;

    void addEmployee(const string&, const double, const double, const int);

    double summSalaryADay(const int, const double) const;
    Employee& operator=(const Employee&);
    bool operator==(const Employee&) const;
    Employee& operator[](int i);
    friend ostream& operator<<(ostream& os, const Employee& emp);
};
