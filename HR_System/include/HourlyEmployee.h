#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
    double hoursWorked;
    double rate;
public:
    HourlyEmployee();
    ~HourlyEmployee();

    void setHoursWorked();
    double getHoursWorked();
    void setRate();
    double getRate();
    double getSalary();

    void setHourlyEmployee();
    string getDetails();
};

#endif // HOURLYEMPLOYEE_H
