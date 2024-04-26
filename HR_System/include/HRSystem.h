#ifndef HRSYSTEM_H
#define HRSYSTEM_H

#include "Employee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include "ManagerEmployee.h"
#include "SalariedEmployee.h"
#include "Departments.h"
#include <bits/stdc++.h>
using namespace std;

class HRSystem
{
private:
    Employee* empList;
    int empNum = 0;

    int depNum = 0;
    Departments* department;
    void addEmpToDepart(Employee employee);
    int findDepart(int ID);
public:
    HRSystem();
    ~HRSystem();

    void addEmployee();
    void searchEmployee();
    void editEmployee();
    void deleteEmployee();
    void displayEmployee();
    void printDepartment(int ID);
    void calculateTotalPayroll();
};

#endif // HRSYSTEM_H
