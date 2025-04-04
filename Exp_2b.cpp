// To add students details f a student using a paprameterized cunstroctor of student class

#include<iostream>
using namespace std;
class Student{
    public:
    string StudentName;
    int StudentID, semester;
    // float marks, per;
    // public:
    Student(string Name, int ID, int sem){
        StudentName=Name;
        StudentID=ID;
        semester=sem;
        // marks=mark;
    }
    void display(){
        cout<<"Name: "<<StudentName<<endl;
        cout<<"Student ID is: "<<StudentID<<endl;
        cout<<"Student Semester is: "<<semester<<endl;
    }
};
int main(){
    Student obj[3]={{"Ram", 201,4}, {"Sham", 302,6}, {"Sita", 103,2}};
    for(int i=0;i<3;i++){
        cout<<"Information of Student with ID: "<<obj[i].StudentID<<endl;
        obj[i].display();
    }
    return 0;
}