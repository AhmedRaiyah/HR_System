#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Benefits.h"
#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    Benefits *benefitList;
    int benefitNum = 0;
protected:
    int empId;
    string empName;
    string empNumber;
    string empEmail;
    string empJobTitle;
    double Salary = 0;
public:
    Employee();
    ~Employee();

    string departName;
    int departId;

    void setEmpId();
    int getEmpId();
    void setEmpName();
    string getEmpName();
    void setEmpNumber();
    string getEmpNumber();
    void setEmpEmail();
    string getEmpEmail();
    void setEmpJobTitle();
    string getEmpJobTitle();

    virtual double getSalary();
    double calculatePay();

    void setEmployee();
    string displayDetails();
};

#endif // EMPLOYEE_H
