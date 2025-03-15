#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string stud_ID;
    string name, sem, branch;
    public:
    void get_detail();
    void print_detail();
};
void Student::get_detail(){
    cout<<"Enter the Student ID: "<<endl;
    cin>>stud_ID;
    cout<<"Enter the Student Name: "<<endl;
    cin>>name;
    cout<<"Enter the Student's Semester: "<<endl;
    cin>>sem;
    cout<<"Enter the Student's Branch: "<<endl;
    cin>>branch;
}
void Student::print_detail(){
    cout<<"The Student ID is: "<<stud_ID<<endl;
    cout<<"The Student Name is: "<<name<<endl;
    cout<<"The Student's Semester is: "<<sem<<"th"<<endl;
    cout<<"The Student's Branch is: "<<branch<<endl;
    
}
int main(){
    Student sid;
    sid.get_detail();
    sid.print_detail();
    
    return 0;
}
