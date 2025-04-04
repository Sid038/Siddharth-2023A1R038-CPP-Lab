#include<iostream>
using namespace std;

class Constructor{
    int a,b;
    public:
    Constructor(void); // creating a constructor function. it has same name as of class
    // it initializes objects of class
    // it is invoked automatically when object is created
    void printnum()
    {
        cout << "Your complex number is: " << a << " + " << b << "i" << endl;
    }
};
Constructor::Constructor(void){
    a=5;
    b=6;
}
int main(){
    Constructor c1;
    c1.printnum();
    return 0;
}
// it should be declared as public
// invoked whenever object is created
// cannot return values and do not have return type
// it can have default arguments
// we cannot refer to their address