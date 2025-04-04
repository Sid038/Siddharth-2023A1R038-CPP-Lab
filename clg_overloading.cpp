// /*Program to demonstrate func overloading.
//   Create a class with name shapes, create a circle, area of rectangle, area of triangle, using function overloading*/

// #include <iostream>
// using namespace std;
// class area
// {
// public:
//     area(float radius)
//     {
//         float pi = 3.14;
//         cout << "The area of Cicle is: " << pi * radius * radius << endl;
//     }
//     area()
//     {
//         float length=6, breadth=5;

//         cout << "The area of rectangle is: " << length * breadth << endl;
//     }
//     area(float base, float height)
//     {
//         cout << "The area of triangle is: " << 0.5 * base * height << endl;
//     }
// };
// //   void Shapes::area(float radius){
// //     float pi=3.14;
// //     cout<<"The area of Cicle is: "<<pi*radius*radius<<endl;
// //   }
// //   void Shapes:: area(){
// //     float length=6, breadth=5;
// //     cout<<"The area of rectangle is: "<<length*breadth<<endl;
// //   }
// //   void Shapes::area(float base, float height){
// //     cout<<"The area of triangle is: "<<0.5*base*height<<endl;
// //   }
// int main()
// {

//     area sid1(5);
//     area sid2(4, 5);
//     area sid3(5);
//     return 0;
// }
#include<iostream>
using namespace std;

class Area{
    public:
    Area(float radius);
    Area(int length, int breadth);
    Area(float base, float height);
};
Area::Area(float base, float height){
    // float base=4, height=5;
    cout<<"The area of triangle is: "<<0.5*base*height<<endl;
}
Area::Area(float radius){
    float pi=3.14;
    cout<<"The area of Cicle is: "<<pi*radius*radius<<endl;
}
Area::Area(int length, int breadth){
    cout<<"The area of rectangle is: "<<length*breadth<<endl;
}
int main(){
    Area a1(5,4);
    Area a2(5);
    Area a3(6,5);
    return 0;
}