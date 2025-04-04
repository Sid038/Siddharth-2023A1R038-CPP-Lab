//To update  the details of a  student using a member function of student class.
/* create a student class with parameterized function, add details of student with attributes like name, roll no, marks, credits
create display function to display records on screen 
create 3 functions sem1,2,3
all three sem functions stores copy of marks attributes with them and retrives value of name, roll no, credits from student class
create delete function to delete student records */

#include<iostream>
using namespace std;
class Student{
    public:
    string StdName;
    int Roll_No, credits;
    float marks;
    Student(string name, int no, int crd, float mark){
        StdName=name;
        Roll_No=no;
        credits=crd;
        marks=mark;
    }
    void Display(){
        cout<<"Student name is: "<<StdName<<" and Roll No: "<<Roll_No<<endl;
        cout<<"Student Credits: "<<credits<<" and Marks: "<<marks<<endl;
    }
void Delete_details(){
    // a.marks=500;
    // a.StdName="ABC";
    // a.Display();
    StdName="";
    Roll_No=-1;
    credits=-1;
    marks=-1;
}};
// void Semester1(Student Sem1){ // object as Pass by Value
//     Sem1.marks=450;
//     cout<<"Semester 1 Result is "<<endl;
//     cout<<"Name: "<<Sem1.StdName<<endl<<" Roll No. : "<<Sem1.Roll_No<<endl<<" Marks: "<<Sem1.marks<<" Credits: "<<Sem1.credits<<endl;
// }
// void Semester2(Student Sem2){ // object as Pass by Value
//     Sem2.marks=350;
//     cout<<"Semester 2 Result is "<<endl;
//     cout<<"Name: "<<Sem2.StdName<<endl<<" Roll No. : "<<Sem2.Roll_No<<endl<<" Marks: "<<Sem2.marks<<" Credits: "<<Sem2.credits<<endl;
// }
// void Semester3(Student Sem3){ // object as Pass by Value
//     Sem3.marks=300;
//     cout<<"Semester 3 Result is "<<endl;
//     cout<<"Name: "<<Sem3.StdName<<endl<<" Roll No. : "<<Sem3.Roll_No<<endl<<" Marks: "<<Sem3.marks<<" Credits: "<<Sem3.credits<<endl;
// }

// void Delete(Student b){
//     b->name='0';
//     b->no=0;
// }
int main(){
    Student s("Rohan", 101, 8, 90);
    cout<<"Current Semester details are: "<<endl;
    s.Display();
    cout<<"After deletion: "<<endl;
    s.Delete_details();
    s.Display();
    return 0;
}