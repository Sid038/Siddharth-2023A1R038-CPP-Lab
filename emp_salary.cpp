#include <iostream>
using namespace std;
class Employee
{
private:
    float Empcode, BasicSalary, NetSalary;

public:
    void salary();
    void display();
    void calculation();
};
void Employee::salary()
{
    cout << "Enter Employee Code: " << endl;
    cin >> Empcode;
    cout << "Enter your salary: " << endl;
    cin >> BasicSalary;
}
void Employee::calculation()
{
    float DA, HRA, TA, IT;
    DA = 1.74 * BasicSalary;
    HRA = 0.10 * BasicSalary;
    TA = 500;
    if (BasicSalary > 50000)
    {
        IT = 0.05 * BasicSalary;
    }
    else
    {
        IT = 0;
    }
    NetSalary = (BasicSalary + TA + HRA + DA) - IT;
}
void Employee::display()
{
    cout << "Employee Code is: " << Empcode << endl;
    cout << "Employee Basic Salary is: " << BasicSalary << endl;
    cout << "Employee Net Salary is: " << NetSalary << endl;
}

int main()
{

    // Employee a;
    Employee a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i].salary();
        a[i].calculation();
        a[i].display();
    }
    // a.salary();
    // a.calculation();
    // a.display();

    return 0;
}
