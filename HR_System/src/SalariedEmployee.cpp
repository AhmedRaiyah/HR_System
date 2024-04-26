#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
    //ctor
}

SalariedEmployee::~SalariedEmployee()
{
    //dtor
}

void SalariedEmployee::setSalary()
{
    cout << "Enter Salary: $";
    cin >> salary;
}

double SalariedEmployee::getSalary()
{
    return salary;
}

void SalariedEmployee::setSalariedEmployee()
{
    setEmployee();
    setSalary();
    Salary = salary;
}

string SalariedEmployee::getDetails()
{
    ostringstream disp;
    disp << displayDetails();
    return disp.str();
}
