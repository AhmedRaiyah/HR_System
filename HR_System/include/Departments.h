#ifndef DEPARTMENTS_H
#define DEPARTMENTS_H

#include "Employee.h"
#include <bits/stdc++.h>
using namespace std;

class Departments
{
private:
    int departId;
    string departName;
public:
    int empNum = 0;
    Employee* Employees;

    Departments();
    ~Departments();

    void setDepartId(int ID);
    void setDepartName(string name);
    int getDepartId();
    string getDepartName();

    void Print();
};

#endif // DEPARTMENTS_H
