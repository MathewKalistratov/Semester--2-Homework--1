#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>
#include "Employee.h"
using namespace std;

class Department 
{
private:
    string depname;  //�������� ������
	int employees;  //���������� ����������� � ���
	double summsalary;  //��������� �������� ���� ����������� �� ����
	bool coffeemachine;  //������� � ������ �������� � ����  
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