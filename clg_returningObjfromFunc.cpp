// /* Returning object from function
// 1. Return as value(crete seperate copy)
// 2. Return as reference(will refer original object)
// 3. return as pointer      */

// /* Method 1---> Return object from function as value*/
// #include <iostream>
// using namespace std;
// class Program
// {
// public:
//     int a; // member variable
//     Program(int b)
//     { // parameterized cunstroctor of class
//         a = b;
//     }
//     void display()
//     { // member function to displayvalue of a
//         cout << "\n value of a is: " << a;
//     }
// };
// Program modify()
// {                     // functoin with return type as class type
//     Program obj1(10); // this function will return object
//     return obj1;
// }
// int main()
// {
//     Program obj2(5);
//     obj2.display();
//     obj2 = modify();
//     obj2.display();
//     // Program obj2 = modify(); // calling of function using object of class
//     // obj2.display();          // because modify function will return object
//     return 0;                // to store returned value we need similar type of object
// }
/*Program to demonstrate working of returning object from function
a. create a class with namwe Bank
b. create member variable balance
c. create paremeterized constructor
d. create Deposit() function to add amount to balance variable*/

#include<iostream>
using namespace std;
class Bank{
    public: float balance;
    Bank(float amt){
        balance= amt;
    }
    void display(){
        cout<<"Balance in your account is: "<<balance<<endl;
    }
};
Bank Deposit(Bank obj1){
    float amt1;
    cout<<"enter amount to deposit: "<<endl;
    cin>>amt1;
    obj1.balance = obj1.balance+amt1;
}
int main(){
    Bank obj2(500);
    return 0;
}