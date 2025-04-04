/*Example :- Single level Inheritance
WAP to
a. create a base class with name MyAPP
b. create a functon with name Welcome_Message(), to dispaly welcome message on screen
c. create a functon with Login(), accept pin from user and validate pin against value 123
    the function will executes only after successful login of user
d. create a functon Accept(), store student information likw, Registration Number, marks
e. create a functon Display() to display information entered by the student
f. create a functon Calc(), reads marks from MyAPP class
   and function Cal() to calculate percentage and grades as per following:-
   Percentage between 80 to 100 A grade
   Percentage between 70 to 80 B grade
   Percentage between 60 to 70 C grade
   otherwise not qualified */

#include <iostream>
using namespace std;
class MyAPP
{
public:
    void Welcome_Message();
    string Login();
    int Reg_No;
    float Marks;
    int Accept(int r, float m)
    {
        Reg_No = r;
        Marks = m;
    }
    void Display()
    {
        cout << "Students Registration Number is: " << Reg_No << endl;
        cout << "Students Marks is: " << Marks << endl;
    }
    string Cal();
    void Calc();

private:
    int pin;
};
void MyAPP::Welcome_Message()
{
    cout << "Welcome to MyCAMU by MIET Jammu!" << endl;
}
string MyAPP::Login()
{
    cout << "Enter your pin number: " << endl;
    cin >> pin;
    if (pin == 123)
    {
        cout << "Your PIN Number is correct." << endl;
        return "True";
    }
    else
    {
        cout << "Wrong PIN" << endl;
        return "False";
    }
}
string MyAPP::Cal()
{
    if (Marks >= 80 && Marks < 100)
    {
        return "A";
    }
    else if (Marks >= 70 && Marks < 80)
    {
        return "B";
    }
    else if (Marks >= 60 && Marks < 70)
    {
        return "C";
    }
    else
    {
        cout << "Not Qualified" << endl;
    }
}
void MyAPP::Calc()
{
    if ("A")
    {
        cout << "Your grade is A" << endl;
    }
    else if ("B")
    {
        cout << "Your grade is B" << endl;
    }
    else if ("C")
    {
        cout << "Your grade is C" << endl;
    }
}
int main()
{
    MyAPP abc;
    abc.Welcome_Message();
    string res;
    res = abc.Login();
    if (res == "True")
    {
        int res1 = abc.Accept(38, 85);
    }
    else
    {
        res == "False";
    }
    abc.Display();
    abc.Cal();
    abc.Calc();
    // abc.Login();
    // string res;
    // res = abc.Login();
    // int res1;
    // if(res =="True"){
    //     res1 == abc.Accept(38, 85);
    // }
    // // abc.Accept(38, 85);
    // abc.Cal();
    // abc.Calc();
    return 0;
}