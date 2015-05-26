// Copyright 2015 <Matvey Kalistratov>
#include <string>
#include "Employee.h"
#include "Department.h"

void help() {
    cout << "!!!CAUTION!!! First of all you should create the department! ";
    cout << "Hope for your understanding" << endl;
    cout << "Enter <AddEmps> to add employees into the base" << endl;
    cout << "Enter <AddDep> to add the new department" << endl;
    cout << "Enter <Del> to delete the book" << endl;
    cout << "Enter <PrintDepInf> to print the information about the department"
        << endl;
    cout << "Enter <PrintEmps> to print employees of the department" << endl;
    cout << "Enter <end> to end up this program" << endl;
    cout << "Enter <HELP!> to output help message" << endl;
    cout << "Enter <shoot> to shoot yourself in the foot" << endl << endl;
}

int main() {
    help();
    bool flag = false;
    string userinput;
    cin >> userinput;
    Employee empl;
    Department dep, printdep;
    string name, depname;
    int hours, age, employees, empnum;
    double salaryhour, salaryaday;
    bool coffeemachine;
    Employee *x2;
    x2 = &empl;
    while (userinput != "end") {
        if (userinput == "AddEmps") {
            for (int i = 0; i < employees; i++) {
                cout << "Enter the name of the employee: ";
                cin >> name; cout << endl;
                cout << "Enter the salary for an hour of the employee: ";
                cin >> salaryhour; cout << endl;
                cout << "Enter, how many hours employee works a day: ";
                cin >> hours; cout << endl;
                cout << "Enter the age of the employee: ";
                cin >> age; cout << endl;
                empl.addEmployee(name, salaryhour, hours, age);
                dep.add(empl);
                try {
                    dep.add(*x2);
                }
                catch (exception& e) {
                    cout << e.what() << endl;
                }
                flag = true;
            }
        }
        if (userinput == "AddDep") {
            cout << "Enter the name of the department: ";
            cin >> depname; cout << endl;
            cout << "Enter the number of employees: ";
            cin >> employees; cout << endl;
            cout << "Enter 0/1, if there is a coffeemachine in the department ";
            cin >> coffeemachine; cout << endl;
            dep.addDepartment(depname, coffeemachine);
            flag = true;
        }
        if (userinput == "Del") {
            cout << "delete employee with id:" << endl;
            cin >> empnum;
            try {
                dep.remove(empnum);
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
            flag = true;
        }
        if (userinput == "PrintDepInf") {
            cout << "There are " << employees
                << " employees in the department" << endl;
            dep.printDepartment();
            flag = true;
        }
        if (userinput == "PrintEmps") {
            dep.printEmployees();
            flag = true;
        }
        if (userinput == "HELP!") {
            help();
            flag = true;
        }
        if (userinput == "shoot") {
            int* i = 0;
            *i = 100500;
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
