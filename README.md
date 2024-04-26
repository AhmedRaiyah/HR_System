# HR_System
Project Overview:

The project is an HR management system designed to handle employee information, benefits, and payroll for a company.
It allows users to add, search, edit, delete, and display employee details, as well as calculate the total payroll and display department information.

Functions:
------------------------
- Employee Class (Employee.h, Employee.cpp):
Manages basic employee information such as ID, name, contact details, job title, and salary.
Includes virtual functions to calculate and display employee salary and details.
Subclasses (SalariedEmployee, HourlyEmployee, ManagerEmployee, CommissionEmployee) inherit from the Employee class and provide specific implementations for different types of employees.

- Benefits Class (Benefits.h, Benefits.cpp):
Manages employee benefit information such as plan type and coverage amount.
Includes virtual functions to get and display benefit details.
Subclasses (HealthBenefit, DentalBenefit) inherit from the Benefits class and provide specific implementations for different types of benefits.

- Departments Class (Departments.h, Departments.cpp):
Manages department information including ID, name, and employee list.
Allows printing of department details and employee list.

- HRSystem Class (HRSystem.h, HRSystem.cpp):
Acts as the main controller for the HR management system.
Includes functions for adding, searching, editing, deleting, and displaying employee details.
Provides functionality to print department details and calculate the total payroll.

- Main Function (main.cpp):
Provides a user interface for interacting with the HR management system.
Displays a menu for various operations like adding, searching, editing, and deleting employees, displaying employee details, department details, and total payroll.
Uses instances of HRSystem class to perform these operations based on user input.
Specific Employee Subclasses (ManagerEmployee, SalariedEmployee, HourlyEmployee, CommissionEmployee) and Benefits Subclasses
- (HealthBenefit, DentalBenefit):
Implement specific functionalities and calculations based on the type of employee or benefit.


Each function and class contributes to the overall functionality of the HR management system, allowing for efficient management of employee data and benefits within a company.
