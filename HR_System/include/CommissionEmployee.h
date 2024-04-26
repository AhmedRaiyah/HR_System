#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee: public Employee
{
private:
    int target;
    double rate;
public:
    CommissionEmployee();
    ~CommissionEmployee();

    void setTarget();
    int getTarget();
    void setRate();
    double getRate();
    double getSalary();

    void setCommissionEmployee();
    string getDetails();
};

#endif // COMMISSIONEMPLOYEE_H
