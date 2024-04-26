#include "ManagerEmployee.h"

ManagerEmployee::ManagerEmployee()
{
    //ctor
}

ManagerEmployee::~ManagerEmployee()
{
    //dtor
}

void ManagerEmployee::setBonus()
{
    cout << "Enter Bonus: $";
    cin >> bonus;
}

double ManagerEmployee::getSalary()
{
    return salary + bonus;
}

void ManagerEmployee::setManagerEmployee()
{
    setSalariedEmployee();
    setBonus();
    Salary = salary + bonus;
}

string ManagerEmployee::getDetails()
{
    ostringstream disp;
    disp << displayDetails();
    return disp.str();
}
