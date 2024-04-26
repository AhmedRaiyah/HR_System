#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
#include <bits/stdc++.h>
using namespace std;

class SalariedEmployee : public Employee
{
public:
    double salary;

    SalariedEmployee();
    ~SalariedEmployee();

    void setSalary();
    double getSalary();
    void setSalariedEmployee();
    string getDetails();
};

#endif // SALARIEDEMPLOYEE_H
