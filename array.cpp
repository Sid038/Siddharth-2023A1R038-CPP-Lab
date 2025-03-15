/*Program to demonstrate implementation of array using direct initialization method*/
#include <iostream>
using namespace std;
class Program
{
private:
    int adv[5];// = {1, 2, 3, 4, 5}; // declaration and direct initialization
    int weak[5];// = {6, 7, 55, 88, 9};

public:
    void display();
    // {
    //     cout << "List of advance learners \t";
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << adv[i] << "\t";
    //     }
    //     cout << "List of weak learners \t";
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << weak[i] << "\t";
    //     }
    // }
};
void Program::display()
{

    cout << "List of advance learners: " << endl;
    cout<<"Enter advance roll number: "<<endl;
    // cin>>adv[5];
    for (int i = 0; i < 5; i++)
    {   
        cin>>adv[i];
        cout << adv[i] << endl;
    }
    cout << "List of weak learners" << endl;
    cout<<"Enter weak roll number: "<<endl;
    // cin>>weak[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>weak[i];
        cout << weak[i] << endl;
    }
    // cout << "Array at index  is: " << adv[11] << endl;
}

int main()
{
    Program a;
    a.display();
    return 0;
}
