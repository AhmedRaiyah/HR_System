#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{
    //ctor
}

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}

void CommissionEmployee::setTarget()
{
    cout << "Enter Units Sold: ";
    cin >> target;
}

int CommissionEmployee::getTarget()
{
    return target;
}

void CommissionEmployee::setRate()
{
    cout << "Enter Rate: $";
    cin >> rate;
}

double CommissionEmployee::getRate()
{
    return rate;
}

double CommissionEmployee::getSalary()
{
    return rate * target;
}

void CommissionEmployee::setCommissionEmployee()
{
    setEmployee();
    setTarget();
    setRate();
    Salary = target * rate;
}

string CommissionEmployee::getDetails()
{
    ostringstream disp;
    disp << displayDetails();
    return disp.str();

}
