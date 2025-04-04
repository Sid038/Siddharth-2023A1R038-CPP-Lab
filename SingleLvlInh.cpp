/*WAP to
a. create abase class with name MyAPP
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
   otherwise not qualified
   h.create a new derived class, course_selection(),
   i. create a function Select(), this function will accept grade from previous class and assign course according to the grade acquired by the student
   as per following criteria:-
   Grade A : Course Option :-Cyber Security , .net programming
   Grade B: Course Option :- Ethical Hacking, Full Stack Development
   Grade C:-Course Option :-Mern Programming , AI/Ml*/

#include <iostream>
#include <string>

using namespace std;

class MyApp
{
protected:
    int regNo;
    float marks;
    int pin;

public:
    void welcome_message()
    {
        cout << "Welcome to MyCAMU by MIET Jammu!" << endl;
    }

    void Login()
    {
        cout << "Enter PIN to Login: ";
        cin >> pin;
        if (pin == 1645)
        {
            cout << "Login successful!" << endl;
        }
        else
        {
            cout << "Invalid PIN!" << endl;
            exit(0);
        }
    }

    void accept()
    {
        cout << "Enter your Registration Number: ";
        cin >> regNo;
        cout << "Enter your Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Students Registration Number is: " << regNo << endl;
        cout << "Students Marks are: " << marks << endl;
    }

    float getMarks()
    {
        return marks;
    }
};

class GradeCal : public MyApp
{
protected:
    string grade;

public:
    void calc()
    {
        float percentage = (marks / 100) * 100;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 80 && percentage <= 100)
        {
            grade = "A";
            cout << "Grade: A" << endl;
        }
        else if (percentage >= 70 && percentage < 80)
        {
            grade = "B";
            cout << "Grade: B" << endl;
        }
        else if (percentage >= 60 && percentage < 70)
        {
            grade = "C";
            cout << "Grade: C" << endl;
        }
        else
        {
            grade = "Not Qualified";
            cout << "Not Qualified in C++" << endl;
        }
    }

    string getGrade()
    {
        return grade;
    }
};

class CourseSelection : public GradeCal
{
public:
    void select()
    {
        cout << "Course Selection based on Grade: " << grade << endl;
        if (grade == "A")
        {
            cout << "Available Courses: Cyber Security, .NET Programming" << endl;
        }
        else if (grade == "B")
        {
            cout << "Available Courses: Ethical Hacking, Full Stack Development" << endl;
        }
        else if (grade == "C")
        {
            cout << "Available Courses: MERN Programming, AI/ML" << endl;
        }
        else
        {
            cout << "No course available as the student is not qualified." << endl;
        }
    }
};

int main()
{
    CourseSelection student;
    student.welcome_message();
    student.Login();
    student.accept();
    student.display();
    student.calc();
    student.select();

    return 0;
}