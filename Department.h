#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>
#include "Employee.h"
using namespace std;

class Department 
{
private:
    string depname;  //Название отдела
	int employees;  //Количество сотрудников в нем
	double summsalary;  //Суммарная зарплата всех сотрудников за день
	bool coffeemachine;  //Наличие в отделе автомата с кофе  
public:
	Department();
	~Department();

	void setDepName(string );
	void setEmployees(int );
	void setCoffeeMachine(bool );
	void addDepartment();

	void changeDepartment();

	double countSummSalary();

	void printDepartment();

	Department& operator=(const Department&);



};