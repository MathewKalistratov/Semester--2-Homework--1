// Copyright 2015 <Matvey Kalistratov>
#include <string>
#include "Employee.h"

Employee::Employee() {
    name = "Unknown employee";
    salaryhour = 0;
    hours = 0;
    age = 0;
}

Employee::~Employee() {  // I'll think about it
}

Employee::Employee(const Employee& copy) {
    name = copy.name;
    salaryhour = copy.salaryhour;
    hours = copy.hours;
    age = copy.age;
}

void Employee::setName(const string& name) {
    this->name = name;
}

const string& Employee::getName() const {
    return name;
}

void Employee::setSalary(const double& salaryhour) {
    this->salaryhour = salaryhour;
}

const double Employee::getSalary() const {
    return salaryhour;
}

void Employee::setHours(const int& hours) {
    this->hours = hours;
}

const int Employee::getHours() const {
    return hours;
}

void Employee::setAge(const int& age) {
    this->age = age;
}

const int Employee::getAge() const {
    return age;
}

void Employee::addEmployee(const string& name,
    const double salaryhour, const double hours, const int age) {
    Employee::setName(name);
    Employee::setSalary(salaryhour);
    Employee::setHours(hours);
    Employee::setAge(age);
}
// 61
double Employee::summSalaryADay(const int hours,
    const double salaryhour) const {
    double salaryaday;
    return salaryaday = hours * salaryhour;
}

Employee & Employee::operator=(const Employee& right) {
    if (this != &right) {
        name = right.name;
        hours = right.hours;
        salaryhour = right.salaryhour;
        age = right.age;
        return *this;
    }
}

bool Employee::operator==(const Employee& right) const {
    return name == right.name;
    return hours == right.hours;
    return salaryhour == right.salaryhour;
    return age == right.age;
}

ostream& operator<<(ostream& os, const Employee& emp) {
    cout << "Employee's name: " << emp.getName() << endl;
    cout << "Employees's age: " << emp.getAge() << endl;
    cout << emp.getName() << "'s salary for an hour: " <<
        emp.getSalary() << endl;
    cout << emp.getName() << " works " << emp.getHours() <<
        " hours a day" << endl;
    cout << emp.getName() << "'s salary for a day: " <<
        emp.summSalaryADay(emp.getHours(), emp.getSalary()) << endl << endl;
    return os;
}
