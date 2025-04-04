#include<iostream>
using namespace std;
class circle{
    public:
    float radius ,area1, pi;
    void area();
};
void circle :: area(){
    cout<<"Enter the radius: "<<endl;
    cin>>radius;
    pi=3.14;
    cout<<"Area of circle is: "<<pi*radius*radius<<endl; 
}
int main(){
    circle a;
    a.area();
    
    return 0;
}