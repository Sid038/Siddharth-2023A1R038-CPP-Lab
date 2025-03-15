#include<iostream>

using namespace std;

// void swap(int a, int b){
//     int temp = a;
//     a=b;
//     b = temp;
// }

// void swapPionter(int* a, int* b){
//     int temp = *a;
//     *a=*b;
//     *b = temp;
// }

void swapReferenceVar(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
}

//int&  swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a=b;
//     b = temp;
//     return a;
// }

int main(){
    int x = 8, y = 9;
    cout<<"x is "<<x<<" and y is "<<y<<endl;
    // swap(x,y); this will not swap a and b
    // swapReferenceVar(x,y) = 10;
    //swapPointer(&x, &y);
    swapReferenceVar(x,y);
    cout<<"x is "<<x<<" and y is "<<y<<endl;
    return 0;
}
