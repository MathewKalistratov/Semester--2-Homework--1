#pragma once
#include "Employee.h"

Employee::Employee()
{
	name = "Unknown employee";
	salaryhour = 0;
	hours = 0;
	salaryaday = 0;
};

Employee::~Employee() //А может он здесь и не нужен, динамически то не выделяем память... Подумать
{

};

void Employee::setName(string name)
{
	this->name = name;
};

void Employee::setSalary(double salaryhour)
{
	this->salaryhour = salaryhour;
};

void Employee::setHours(int hours)
{
	this->hours = hours;
};

void Employee::addEmployee()
{
	cout << "Enter the name of the employee: "; cin >> name; cout << endl;
	Employee::setName(name);
	cout << "Enter the salary for an hour of the employee: "; cin >> salaryhour; cout << endl;
	Employee::setSalary(salaryhour);
	cout << "Enter, how many hours employee works a day: "; cin >> hours; cout << endl;
	Employee::setHours(hours);
};

void Employee::changeEmployeeParams()
{
	cout << "Enter the new name of the employee: "; cin >> name; cout << endl;
	Employee::setName(name);
	cout << "Enter the new salary for an hour of the employee: "; cin >> salaryhour; cout << endl;
    Employee::setSalary(salaryhour);
	cout << "Enter, how many new hours employee works a day: "; cin >> hours; cout << endl;
	Employee::setHours(hours);
};

double Employee::summSalaryADay()
{
	return salaryaday = hours * salaryhour;
};

void Employee::printEmployee()
{
	cout << "Employee's name: " << name << endl;
	cout << name << "'s salary for an hour: " << salaryhour << endl;
	cout << name << " works " << hours << " a day" << endl;
	cout << name << "'s salary for a day: " << salaryaday << endl;
};

Employee & Employee::operator=(const Employee& right)
{
	if (this == &right) { return *this; }
	name = right.name;
	hours = right.hours;
	salaryhour = right.salaryhour;
	return *this;
};