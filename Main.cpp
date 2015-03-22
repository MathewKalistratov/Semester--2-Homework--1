#pragma once
#include "Employee.h"
#include "Department.h"

void help()
{
	cout << "Enter <AddEmp> to add the new employee into the base" << endl;
	cout << "Enter <ChangeEmp> to ñhange the employee" << endl;
	cout << "Enter <AddDep> to add the new department" << endl;
	cout << "Enter <ChangeDep> to change the department" << endl;
	cout << "Enter <end> to end up this program" << endl;
	cout << "Enter <HELP!> to output help message" << endl;
	cout << "Enter <shoot> to shoot yourself in the foot" << endl << endl;
}

int main()
{
	help();
	bool flag=false;
	string userinput;
	cin >> userinput;
	Employee empl;
	Department dep;
	while (userinput != "end")
	{
		if (userinput == "AddEmp")
		{
			empl.addEmployee();
			empl.summSalaryADay();
			empl.printEmployee();
			flag = true;
		}
		if (userinput == "ChangeEmp")
		{
			empl.addEmployee();
			empl.summSalaryADay();
			empl.printEmployee();
			flag = true;
		}
		if (userinput == "AddDep")
		{
			dep.addDepartment();
			dep.countSummSalary();
			dep.printDepartment();
			flag = true;
		}
		if (userinput == "ChangeDep")
		{
			dep.changeDepartment();
			dep.countSummSalary();
			dep.printDepartment();
			flag = true;
		}
		if (userinput == "HELP!")
		{
			help();
			flag = true;
		}
		if (userinput == "shoot")
		{
			cout << "You have shooted yourself in the foot! Profit!" << endl;
			flag = true;
		}
		if (!flag) cout << "Wrong command! " << endl << endl;
	    flag = false;
		cin >> userinput;
	}
	cout << "Thank you! :)" << endl;
	system("pause>>void");
	return 0;
}