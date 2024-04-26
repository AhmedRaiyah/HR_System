#include "HRSystem.h"

HRSystem::HRSystem()
{
    empList = new Employee[100];
    department = new Departments[100];
}

HRSystem::~HRSystem()
{
    delete [] empList;
    delete [] department;
}

int HRSystem::findDepart(int ID)
{
    for(int i = 0; i < depNum; i++)
    {
        if(department[i].getDepartId() == ID)
        {
            return i;
        }
    }
    return -1;
}

void HRSystem::addEmpToDepart(Employee employee)
{
    int departIndex = findDepart(employee.departId);
    if(departIndex == -1)
    {
        departIndex = depNum;
        department[departIndex].setDepartId(employee.departId);
        department[departIndex].setDepartName(employee.departName);
        depNum++;
    }
    Departments &depart = department[departIndex];
    depart.Employees[depart.empNum] = employee;
    depart.empNum++;
}

void HRSystem::addEmployee()
{
    char ch;
    do
    {
        cout << "\n(1) Manager Employee.\n"
             << "(2) Salaried Employee.\n"
             << "(3) Hourly Employee.\n"
             << "(4) Commission Employee.\n"
             << "Choice: ";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':
        {
            ManagerEmployee employee;
            employee.setManagerEmployee();
            empList[empNum] = employee;
            addEmpToDepart(empList[empNum]);
            empNum+=1;
            break;
        }
        case '2':
        {
            SalariedEmployee employee;
            employee.setSalariedEmployee();
            empList[empNum] = employee;
            addEmpToDepart(empList[empNum]);
            empNum+=1;
            break;
        }
        case '3':
        {
            HourlyEmployee employee;
            employee.setHourlyEmployee();
            empList[empNum] = employee;
            addEmpToDepart(empList[empNum]);
            empNum+=1;
            break;
        }
        case '4':
        {
            CommissionEmployee employee;
            employee.setCommissionEmployee();
            empList[empNum] = employee;
            addEmpToDepart(empList[empNum]);
            empNum+=1;
            break;
        }
        default:
            cout << "Invalid Input.\n";
        }
        cout << "\nDo you want to add another employee?(y/n): ";
        cin >> ch;
        system("cls");
    }
    while(ch == 'y');
}

void HRSystem::searchEmployee()
{
    char ch;
    int seacrhInt, searchIndex = -1;
    string searchString;
    cout << "(1) Search by employee's I.D.\n"
         << "(2) Search by employee's Name/Phone Number.\n"
         << "Choice: ";
    cin >> ch;
    system("cls");
    switch(ch)
    {
    case '1':
    {
        cout << "Enter employee's I.D: ";
        cin >> seacrhInt;
        for(int i = 0; i < empNum; i++)
        {
            if(seacrhInt == empList[i].getEmpId())
                searchIndex = i;
            break;
        }
        if(searchIndex == -1)
        {
            cout << seacrhInt << " was not found.\n";
        }
        else
        {
            cout << "\nEmployee #" << searchIndex+1 << ":\n"
                 << "-------------"
                 << empList[searchIndex].displayDetails() << endl;
        }
        break;
    }
    case '2':
    {
        cout << "Name/Phone Number: ";
        cin.get();
        getline(cin,searchString);
        for(int i = 0; i < empNum; i++)
        {
            if(searchString == empList[i].getEmpName().substr(0, empList[i].getEmpName().find(' ')) || searchString == empList[i].getEmpNumber() || searchString == empList[i].getEmpName())
            {
                searchIndex = i;
                cout << "\nEmployee #" << searchIndex+1 << ":\n"
                     << "-------------"
                     << empList[i].displayDetails() << endl;
            }
        }
        if(searchIndex == -1)
            cout << searchString << " was not found.\n";
        break;
    }
    default:
        cout << "Invalid Input.\n";
    }
}

void HRSystem::editEmployee()
{
    char ch;
    int editInt, editIndex = -1;
    string editString;
    do
    {
        cout << "(1) Find Employee by ID.\n"
             << "(2) Find Employee by Name/Phone Number.\n"
             << "Choice: ";
        cin >> ch;
        switch(ch)
        {
        case '1':
        {
            cout << "\nEnter Employee's I.D: ";
            cin >> editInt;
            for(int i = 0; i < empNum; i++)
            {
                if(editInt == empList[i].getEmpId())
                {
                    editIndex = i;
                    break;
                }
            }
            if(editIndex == -1)
            {
                cout << editInt << " was not found.\n";
            }
            break;
        }
        case '2':
        {
            cout << "\nEnter Name/Number: ";
            cin.get();
            getline(cin,editString);
            for(int i = 0; i < empNum; i++)
            {
                if(editString == empList[i].getEmpName().substr(0, empList[i].getEmpName().find(' ')) || editString == empList[i].getEmpNumber() || editString == empList[i].getEmpName())
                {
                    editIndex = i;
                    break;
                }
            }
            if(editIndex == -1)
            {
                cout << editString << " was not found.\n";
            }
            break;
        }
        default:
            cout << "Invalid Input.\n";
        }
        if(editIndex != -1)
        {
            do
            {
                cout << "\n(1)Edit I.D.\n"
                     << "(2)Edit Name.\n"
                     << "(3)Edit Number.\n"
                     << "(4)Edit E-mail.\n"
                     << "(5)Edit Job Title.\n"
                     << "(0)Edit All.\n"
                     << "Choice: ";
                cin >> ch;
                system("cls");
                switch(ch)
                {
                case '1':
                {
                    empList[editIndex].setEmpId();
                    break;
                }
                case '2':
                {
                    empList[editIndex].setEmpName();
                    break;
                }
                case '3':
                {
                    empList[editIndex].setEmpNumber();
                    break;
                }
                case '4':
                {
                    empList[editIndex].setEmpEmail();
                    break;
                }
                case '5':
                {
                    empList[editIndex].setEmpJobTitle();
                    break;
                }
                case '0':
                {
                    empList[editIndex].setEmployee();
                    break;
                }
                default:
                {
                    cout << "Invalid Entry.\n";
                }
                }
                cout << "\nAnother edit?(y/n): ";
                cin >> ch;
                system("cls");
            }
            while(ch == 'y');
        }
        cout << "\nEdit Another Employee?(y/n): ";
        cin >> ch;
        system("cls");
    }
    while(ch == 'y');
}

void HRSystem::deleteEmployee()
{
    char ch;
    int delInt,delIndex = -1;
    string delString;
    do
    {
        cout << "(1) By employee's I.D.\n"
             << "(2) By Full Name/ Number.\n"
             << "Choice: ";
        cin >> ch;
        switch(ch)
        {
        case '1':
        {
            cout << "\nEnter employee's I.D: ";
            cin >>  delInt;
            for(int i = 0; i < empNum; i++)
            {
                if(delInt == empList[i].getEmpId())
                {
                    delIndex = i;
                    break;
                }
            }
            if(delIndex == -1)
            {
                cout << delInt << " was not found.\n";
            }
            break;
        }
        case '2':
        {
            cout << "\nEnter Employee's Full Name/Phone Number: ";
            cin.get();
            getline(cin,delString);
            for(int i = 0; i < empNum; i++)
            {
                if(delString == empList[i].getEmpName().substr(0, empList[i].getEmpName().find(' ')) || delString == empList[i].getEmpNumber() || delString == empList[i].getEmpName())
                {
                    delIndex = i;
                    break;
                }
            }
            if(delIndex == -1)
            {
                cout << delString << " was not found.\n";
            }
            break;
        }
        default:
            cout << "Invalid Input.\n";
        }
        if(delIndex != -1)
        {
            if(delIndex == 0)
            {
                empList[0] = empList[empNum-1];
                empNum--;
            }
            else
            {
                empList[delIndex] = empList[empNum-1];
                empNum--;
            }
            cout << "\nEmployee Details deleted successfully.\n";
        }
        cout << "\nDelete Another?(y/n): ";
        cin >> ch;
        system("cls");
    }
    while(ch == 'y');
}

void HRSystem::displayEmployee()
{
    cout << "\n\t\t\t    Employees' List\n"
         << "\t\t\t  ====================\n"
         << "No. of Employees: " << empNum
         << "\n~~~~~~~~~~~~~~~~~~~~~\n";
    for(int i = 0; i < empNum; i++)
    {
        cout << "\nEmployee #" << i+1 << ":\n"
             << "--------------"
             << empList[i].displayDetails() << endl;
    }
}

void HRSystem::printDepartment(int ID)
{
    int index = findDepart(ID);
    if(index == -1)
    {
        cout << "\nDepartment not found.\n";
    }
    else
    {
        department[index].Print();
    }
}

void HRSystem::calculateTotalPayroll()
{
    double totalPayroll = 0;
    for(int i = 0; i < empNum; i++)
    {
        totalPayroll += empList[i].calculatePay();
    }
    cout << "\n|===============================|"
         << "\n|Total Payroll: $" << totalPayroll << setw(15) << "|"
         << "\n|===============================|\n\n";
}
