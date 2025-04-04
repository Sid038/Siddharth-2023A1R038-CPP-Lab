/* Static Member of class
1. Stati variables
2. static Fuctions
3. static class*/

/*  member function or non static functions can access static as well as non static member of a class
    static function cannot access non static member of a class */

#include <iostream>
using namespace std;
class Program
{
public:
    int a = 1;
    static int b;
    void Fun1()
    {
        cout << "Value of a in Fun1: " << a << endl;
        cout << "Value of b in Fun2: " << b << endl;
    }
    static void Fun2()
    {
        // cout<<"Value of a in Fun1: "<<a;// This will raise error as static members cannot access non static member of class
        // because they are dependent on instances or object of class for their existence and static functions belongs to class
        // directly and are not dependent on object of class for their existence
        cout << "Value of b in Fun2: " << b << endl;
    }
};
int Program ::b = 1;
// Static of initialize static variable outside class
// datatype class name::(scope resolution operator) and variable name value;
// If we dont initialize static variable, it is automatically initialized with 0
int main()
{
    Program::Fun2();
    // calling static function, without object of class using classname::function name
    //  it is not possible to call fun1() non static function without class obj
    Program obj;
    obj.Fun1();
    obj.Fun2();
    return 0;
}