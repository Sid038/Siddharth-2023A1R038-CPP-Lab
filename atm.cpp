#include <iostream>
using namespace std;

class ATM_APP
{
public:
    void welcome()
    {
        cout << "Hi! Welcome to ATM App." << endl;
    }

private:
    int pin;

public:
    string validate()
    {
        cout << "Enter your pin number: " << endl;
        cin >> pin;
        if (pin == 123)
        {
            cout << "Your PIN Number is correct. Please continue your transaction." << endl;
            return "True";
        }
        else
        {
            cout << "Wrong PIN" << endl;
            return "False";
        }
    }

private:
    float Wamt;

public:
    float withdraw(float Bamt)
    {
        cout << "Enter the amount you want to withdraw: " << endl;
        cin >> Wamt;
        if (Wamt > Bamt)
        {
            cout << "Insufficient balance" << endl;
            cout << "Your current balance is " << Bamt << endl;
        }
        else
        {
            return Bamt - Wamt;
        }
    }

public:
    void disp_balance(float amt)
    {
        cout << "Your current balance is " << amt << endl;
    }
};

int main()
{                                              
    ATM_APP x;                                 
    x.welcome();                               
                                               
    string res;                                
    float amt1 = 10000.50;                     
    float res1;
    res = x.validate();                        
    if (res == "True")
    {                                          
        res1 = x.withdraw(amt1);               
        x.disp_balance(res1);                  
    }                                          
    else
    {                                          
        cout << "Transaction failed." << endl; 
    }                                          
                                               
                            
    return 0;                                  
} 
