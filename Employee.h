#pragma once
#include "Department.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;  //��� ����������
	int hours;  //���������� ������� ����� � ����
	double salaryhour;  //�������� �� ���
	double salaryaday;  //�������� �� ����
public:
	Employee();
	~Employee();

	void setName(string );
	void setSalary(double);
	void setHours(int);
	void addEmployee();
	
	void changeEmployeeParams();

	double summSalaryADay();
	void printEmployee();
	Employee& operator=(const Employee&);
};

