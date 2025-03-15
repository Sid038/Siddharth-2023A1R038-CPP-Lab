#include <iostream>
using namespace std;
class area
{
private:
    float length1, breadth1;

public:
    void Set_Dim(float length, float breadth);
    void Get_Area();
};
void area::Set_Dim(float length, float breadth)
{
    length1 = length;
    breadth1 = breadth;

    cout << "The length of rectangle: " << length << endl;

    cout << "The breadth of rectangle: " << breadth << endl;
    // cin>>breadth;
}


int main()
{
    area a;
    a.Set_Dim(4, 5);
    a.Get_Area();
    return 0;
}
void area::Get_Area()
{
    // float length1, breadth1;
    cout << "Area of rectangle with length " << length1 << " and breadth " << breadth1 << " is: " << length1 * breadth1 << endl;
}
