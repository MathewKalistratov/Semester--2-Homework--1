// Copyright 2015 <Matvey Kalistratov>
#pragma once
#include "Department.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include <list>
#include "EmployeeAlreadyExist.h"
#include "EmployeeNotFound.h"

Department::Department() {
    depname = "Unknown department";
    // employees = 0;
    summsalary = 0;
    coffeemachine = false;
}

Department::~Department() {
}

Department::Department(const Department& copy) {
    depname = copy.depname;
    employees = copy.employees;
    summsalary = copy.summsalary;
    coffeemachine = copy.coffeemachine;
}

void Department::remove(int number) {
    list<Employee>::iterator iter;
    if (number < this->employees.size()) {
        advance(iter, number);
        employees.erase(iter);
    } else {
        throw EmployeeNotFound(number);
    }
}

void Department::remove(const Employee& emp) {
    list<Employee>::iterator iter = find(employees.begin(),  // 40
        employees.end(), emp);
    if (iter != employees.end()) {
        employees.erase(iter);
    } else {
        throw EmployeeNotFound(emp);
    }
}

void Department::add(const Employee& emp) {
    if (this->has(emp))
        throw EmployeeAlreadyExist(emp);
    employees.push_back(emp);
}

bool Department::has(const Employee& emp) {
    return (find(employees.begin(), employees.end(),
        emp) != employees.end());
}

void Department::setDepName(const string &depname) {
    this->depname = depname;
}

const string Department::getDepName() {
    return depname;
}

void Department::setEmployees(list <Employee> employees) {
    this->employees = employees;
}

list <Employee> Department::getEmployees() {
    return employees;
}

void Department::setCoffeeMachine(const bool &coffeemachine) {
    this->coffeemachine = coffeemachine;
}

const bool Department::getCoffeeMachine() {
    return coffeemachine;
}

void Department::addDepartment(const string& depname, const bool coffemachine) {
    Department::setDepName(depname);
    Department::setEmployees(employees);
}

void Department::printDepartment() {
    cout << "The name of the department: " << depname << endl;
    if (coffeemachine) {
        cout << "There is a coffeemachine in "
            << depname << " department" << endl;
    } else {
        cout << "There is no coffeemachine in " << depname <<
            " department" << endl;
    }
}

void Department::printEmployees() {
    for (const auto& Employee : employees)
    if (!employees.empty()) {
        cout << Employee;
    }
}

Department & Department::operator=(const Department& right) {
    if (this != &right) {
        depname = right.depname;
        employees = right.employees;
        coffeemachine = right.coffeemachine;
        return *this;
    }
}

bool Department::operator==(const Department& right) {
    return depname == right.depname;
    return employees == right.employees;
    return summsalary == right.summsalary;
    return coffeemachine == right.coffeemachine;
}

const Employee& Department::operator[](int i) const {
    list<Employee>::const_iterator iter = employees.cbegin();
    if (i < employees.size()) {
        advance(iter, i);
        return *iter;
    } else {
        throw EmployeeNotFound(i);
    }
}
