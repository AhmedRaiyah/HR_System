#include <iostream>
#include "HRSystem.h"
using namespace std;

int main()
{
    HRSystem HR;
    char ch;
    int ID;
    do
    {
        cout <<"\n----------------|\n"
             << "Main Menu\t|\n"
             << "----------------|\n"
             << "(1) Add Employee.\n"
             << "(2) Search Employee.\n"
             << "(3) Edit Employee.\n"
             << "(4) Delete Employee.\n"
             << "(5) Display Employees.\n"
             << "(6) Display Department.\n"
             << "(7) Display Total Payroll.\n"
             << "(0) Exit\n"
             << "Enter Your Choice: ";
        cin>>ch;
        system("cls");
        if(ch == '0')
        {
            break;
        }
        switch(ch)
        {
        case '1':
        {
            HR.addEmployee();
            break;
        }
        case '2':
        {
            HR.searchEmployee();
            break;
        }
        case '3':
        {
            HR.editEmployee();
            break;
        }
        case '4':
        {
            HR.deleteEmployee();
            break;
        }
        case '5':
        {
            HR.displayEmployee();
            break;
        }
        case '6':
        {
            cout << "Enter Department I.D: ";
            cin >> ID;
            system("cls");
            HR.printDepartment(ID);
            break;
        }
        case '7':
        {
           HR.calculateTotalPayroll();
           break;
        }
        default:
        {
            cout << "Invalid Input.\n";
        }
        }
        cout << "\nPress 'h' to return to Main Menu.\n"
             << "Press 'e' to exit Program.\n"
             << "Choice: ";
        cin >> ch;
        system("cls");
    }
    while(ch == 'h');
    cout << "\n\n\t\t----------------------\n"
         << "\t\t| Program Terminated |\n"
         << "\t\t----------------------\n\n\n";
    return 0;
}
