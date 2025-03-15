#include <iostream>
using namespace std;
class Employee
{
public:
    string employee_name;
    int employee_code;

public:
    int basic_salary;
    Employee(string name, int code, int sal)
    {
        employee_name = name;
        employee_code = code;
        basic_salary = sal;
    }
    void Display()
    {
        cout << "\nEmployee name is : " << employee_name << "\nEmployee code is : " << employee_code << "\nEmployee  Basic salary is : " << basic_salary << endl;
    }
};
int gross_salary(Employee obj)
{
    int TA, DA, HRA, PF;
    TA = obj.basic_salary * 0.03;
    DA = obj.basic_salary * 0.04;
    PF = obj.basic_salary * 0.04;
    HRA = obj.basic_salary * 0.05;
    int gross_salary = (obj.basic_salary + TA + DA + HRA) - PF;
    return gross_salary;
}
void Increment(Employee &obj1, int g_sal)
{
    if (g_sal >= 10000 && g_sal <= 20000)
    {
        obj1.basic_salary = obj1.basic_salary + obj1.basic_salary * 0.1;
    }
    else if (g_sal > 20000 && g_sal <= 30000)
    {
        obj1.basic_salary = obj1.basic_salary + obj1.basic_salary * 0.15;
    }
    else if (g_sal > 30000)
    {
        obj1.basic_salary = obj1.basic_salary + obj1.basic_salary * 0.2;
    }
    else
    {
        cout << "Your salary does not meet the increment criteria" << endl;
    }
}
void update_profile(Employee *obj2, string name, int code)
{
    obj2->employee_name = name;
    obj2->employee_code = code;
}
void get_data(const Employee obj3)
{
    cout << "\nEmployee name is : " << obj3.employee_name << "\nEmployee code is : " << obj3.employee_code << "\nEmployee salary is : " << obj3.basic_salary << endl;
}
int main()
{
    string name;
    int code, sal;
    cout << "Enter the name of employee : " << endl;
    cin >> name;
    cout << "Enter the employee code : " << endl;
    cin >> code;
    cout << "Enter the Basic salary : " << endl;
    cin >> sal;
    Employee emp(name, code, sal);
    emp.Display();
    int g_sal = gross_salary(emp);
    cout << "Gross salary is : " << g_sal << endl;
    Increment(emp, g_sal);
    cout << "\nDetails After increment : ";
    emp.Display();
    int ng_sal = gross_salary(emp);
    cout << "Gross salary is : " << ng_sal << endl;
    int choice;
    cout << "\nEnter 1 for update profile\n0 for exit" << endl;
    cin >> choice;
    if (choice == 1)
    {
        string n_name;
        int n_code;
        cout << "Enter new name : " << endl;
        cin >> n_name;
        cout << "Enter the new code : " << endl;
        cin >> n_code;
        update_profile(&emp, n_name, n_code);
        cout << "\nUpdated profile is : ";
        emp.Display();
    }
    else if (choice == 0)
    {
        cout << "Exiting....";
    }
    return 0;
}
