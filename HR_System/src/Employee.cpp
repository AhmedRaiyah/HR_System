#include "Employee.h"

Employee::Employee()
{
    benefitList = new Benefits[100];
}

Employee::~Employee()
{

}

void Employee::setEmpId()
{
    cout << "Enter I.D: ";
    cin >> empId;
}

int Employee::getEmpId()
{
    return empId;
}

void Employee::setEmpName()
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin,empName);
}

string Employee::getEmpName()
{
    return empName;
}

void Employee::setEmpNumber()
{
    cout << "Enter Number: ";
    cin >> empNumber;
}

string Employee::getEmpNumber()
{
    return empNumber;
}

void Employee::setEmpEmail()
{
    cout << "Enter E-mail: ";
    cin >> empEmail;
}

string Employee::getEmpEmail()
{
    return empEmail;
}

void Employee::setEmpJobTitle()
{
    cout << "Enter Job Title: ";
    cin.ignore();
    getline(cin,empJobTitle);
}

string Employee::getEmpJobTitle()
{
    return empJobTitle;
}

double Employee::getSalary()
{
    return Salary;
}

double Employee::calculatePay()
{
    return Salary;
}

void Employee::setEmployee()
{
    setEmpId();
    setEmpName();
    setEmpNumber();
    setEmpEmail();
    setEmpJobTitle();
    cout << "Enter Department Name: ";
    cin >> departName;
    cout << "Enter Department I.D: ";
    cin >> departId;
    cout << "Enter number of Benefits: ";
    cin >> benefitNum;
    for(int i = 0; i < benefitNum; i++)
    {
        cout <<"Benefit No. #" << i+1<<":\n";
        benefitList[i].getBenefit();
    }
}

string Employee::displayDetails()
{
    ostringstream disp;
    disp << "\n-Employee's I.D: " << empId;
    disp << "\n-Employee's Name: " << empName;
    disp << "\n-Employee's Number: " << empNumber;
    disp << "\n-Employee's E-mail: " << empEmail;
    disp << "\n-Employee's Job Title: " << empJobTitle;
    disp << "\n-Department Name: " << departName;
    disp << "\n-Department I.D: " << departId;
    disp << "\n---------------------------";
    disp << "\n-Number of Benefits: " << benefitNum;
    for(int i = 0; i < benefitNum; i++)
    {
        disp << "\n-Benefit No. #" << i+1 << " Details: "
             << benefitList[i].displayBenefit();
    }
    disp << "\n---------------------------";
    disp << "\n-Employee's Salary: $" << getSalary();
    return disp.str();
}
