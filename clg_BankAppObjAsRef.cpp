// /* Q1---> WAP to demonstrate working of passing object as reference to func
// create a class BankApp, implement para const to initilize class att like acc no, acc bal
// implement display func to display info on screen
// implement updatedamt func that accept obj as ref and update acc bal */

// // #include<iostream>
// // using namespace std;
// // class BankApp{
// //     public:
// //     string AccNo;
// //     float AccBal;
// //     BankApp(string AN, float AB){
// //         AccNo=AN;
// //         AccBal=AB;
// //     }
// //     void DisplayAccNo(){
// //         cout<<"Your Account Number is: "<<AccNo<<endl;
// //     }
// //     void DisplayBalance(){

// //         cout<<"Balance is: "<<AccBal<<endl;
// //     }
// // };
// // void UpdatedAmt(BankApp &b){
// //     float withdrawl;
// //     cout<<"Enter amount to withdraw: "<<endl;
// //     cin>>withdrawl;
// //     b.AccBal=b.AccBal-withdrawl;
// //     b.DisplayBalance();
// // }
// // int main(){
// //     BankApp a("def", 2500);
// //     a.DisplayAccNo();
// //     a.DisplayBalance();
// //     UpdatedAmt(a);
    
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// class BankApp{
//     public:
//     char AccNo[5]={'A','B','C','D','E'};
//     float AccBal[5]={2500, 5000, 10000, 500, 8000};
//     BankApp(float AB){
//         // AccNo=AN;
//         // AccBal=AB;
//     }
//     void DisplayAccNo(){
//         for(int i=0;i)
//     }
//     void DisplayBalance(){

//         cout<<"Balance is: "<<AccBal<<endl;
//     }
// };
// void UpdatedAmt(BankApp &b){
//     float withdrawl;
//     cout<<"Enter amount to withdraw: "<<endl;
//     cin>>withdrawl;
//     b.AccBal=b.AccBal-withdrawl;
//     b.DisplayBalance();
// }
// int main(){
//     BankApp a[5]=("def", 2500);
//     a.DisplayAccNo();
//     a.DisplayBalance();
//     UpdatedAmt(a);
    
//     return 0;
// }