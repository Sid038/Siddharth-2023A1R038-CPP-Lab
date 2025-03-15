#include<iostream>
#include<string>
using namespace std;

class clg{
    public:
    // string name;
    // string age;
    // string city;
    // string pin_code;
    void name();
    void age();
    void city();
    void pin_code();
};

void clg::name(){
    string name;
    cout<<"Please enter your name: "<<endl;
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
}
void clg::age(){
    string age;
    cout<<"Please enter your age: "<<endl;
    cin>>age;
    cout<<"Your age is: "<<age<<endl;
}
void clg::city(){
    string city;
    cout<<"Please enter your City: "<<endl;
    cin>>city;
    cout<<"Your city is: "<<city<<endl;
}
void clg::pin_code(){
    string pin_code;
    cout<<"Please enter your PIN Code: "<<endl;
    cin>>pin_code;
    cout<<"Your PIN Code is: "<<pin_code<<endl;
}

int main(){
    clg a;
    a.name();
    a.city();
    a.age();
    a.pin_code();
    return 0;
}
