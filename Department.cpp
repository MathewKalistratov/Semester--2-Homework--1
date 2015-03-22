#include "Department.h"

Department::Department()
{
	depname = "Unknown department";
	employees = 0;
	summsalary = 0;
	coffeemachine = false;
}

Department::~Department()
{


}

void Department::setDepName(string depname )
{
	this->depname = depname;
};

void Department::setEmployees(int employees )
{
	this->employees = employees;
};
 
void Department::setCoffeeMachine(bool)
{
	this->coffeemachine = coffeemachine;
};

void Department::addDepartment()
{
	cout << "Enter the name of the department: "; cin >> depname; cout << endl;
	Department::setDepName(depname);
	cout << "Enter the number of employees: "; cin >> employees; cout << endl;
	Department::setEmployees(employees);
	cout << "Enter 0/1, if there is a coffeemachine in this department "; cin >> coffeemachine; cout << endl;
	Department::setCoffeeMachine(coffeemachine);
};

void Department::changeDepartment()
{
	cout << "Enter the new name of the department: "; cin >> depname; cout << endl;
	Department::setDepName(depname);
	cout << "Enter the new number of employees: "; cin >> employees; cout << endl;
	Department::setEmployees(employees);
	cout << "Enter 0/1, if there is a new situation with a coffeemachine in this department: "; cin >> coffeemachine; cout << endl;
	Department::setCoffeeMachine(coffeemachine);
};

double Department::countSummSalary()
{
	return summsalary = employees;
};

void Department::printDepartment()
{
	cout << "The name of the department" << depname << endl;
	cout << "There are " << employees << " in " << depname << " department" << endl;
	cout << "They need to get " << summsalary << " in total" << endl;
	if (coffeemachine) cout << "There is a coffeemachine in " << depname << " department" << endl;
	else cout << "There is no coffeemachine in " << depname << " department" << endl;
};

Department & Department::operator=(const Department& right)
{
	if (this == &right) { return *this; }
	depname = right.depname;
	employees = right.employees;
	coffeemachine = right.coffeemachine;
	return *this;
};