#include "Departments.h"

Departments::Departments()
{
    Employees = new Employee[100];
}

Departments::~Departments()
{
    delete [] Employees;
}

void Departments::setDepartName(string name)
{
    departName = name;
}

string Departments::getDepartName()
{
    return departName;
}

void Departments::setDepartId(int ID)
{
    departId = ID;
}

int Departments::getDepartId()
{
    return departId;
}

void Departments::Print()
{
    cout << "\nDepartment I.D: " << departId
         << "\nDepartment Name: " << departName
         << "\n======================|"
         << "\nDepartment Employees: |"
         << "\n======================|\n\n";
    cout << setiosflags(ios::left) << setfill('-') << setw(7) << "" << setw(25) << "" << "|" << endl;
    cout << setiosflags(ios::left) << setfill(' ') << setw(7) << "I.D" << setw(25) << "Name" << "|" << endl;
    cout << setiosflags(ios::left) << setfill('-') << setw(7) << "" << setw(25) << "" << "|" << endl;
    for(int i = 0; i < empNum; i++)
    {
        cout << setiosflags(ios::left) << setfill(' ') << setw(7) << Employees[i].getEmpId()
             << setw(25) << Employees[i].getEmpName() << endl;
    }
}
