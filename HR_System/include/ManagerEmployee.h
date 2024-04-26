#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H

#include "SalariedEmployee.h"

class ManagerEmployee : public SalariedEmployee
{
private:
    double bonus;
public:
    ManagerEmployee();
    ~ManagerEmployee();

    void setBonus();
    double getSalary();

    void setManagerEmployee();
    string getDetails();
};

#endif // MANAGEREMPLOYEE_H
