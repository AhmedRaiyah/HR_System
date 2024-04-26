#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{
    //ctor
}

HourlyEmployee::~HourlyEmployee()
{
    //dtor
}

void HourlyEmployee::setHoursWorked()
{
    cout << "Enter Hours Worked: ";
    cin >> hoursWorked;
}

double HourlyEmployee::getHoursWorked()
{
    return hoursWorked;
}

void HourlyEmployee::setRate()
{
    cout << "Enter Rate: $";
    cin >> rate;
}

double HourlyEmployee::getRate()
{
    return rate;
}

double HourlyEmployee::getSalary()
{
    return hoursWorked * rate;
}

void HourlyEmployee::setHourlyEmployee()
{
    setEmployee();
    setHoursWorked();
    setRate();
    Salary = hoursWorked * rate;
}

string HourlyEmployee::getDetails()
{
    ostringstream disp;
    disp << displayDetails();
    return disp.str();
}
