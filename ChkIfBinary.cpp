#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read();
    void ones_compliment(void);
    void display(void);
};

// void binary::ones_compliment(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
// }
void binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        s.at(i) = (s.at(i) == '0') ? '1' : '0';
    }
}

// void binary::display(void)
// {
//     chk_bin();
//     cout << "The binary number is: " << endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout<<"";
// }
void binary::display(void)
{
    chk_bin(); // Validate before displaying
    cout << "The binary number is: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

// void binary::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i)!= '1')
//         {
//             cout << "Entered number is not in binary format" << endl;
//         }
//         return;
//     }
// }
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Error: Entered number is not in binary format." << endl;
            return; // Stop processing but don't exit the entire program
        }
    }
}

// void binary::read(void)
// {
//     cout << "Enter a binary number" << endl;
//     cin >> s;
// }
void binary::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

int main()
{

    // binary b;
    // // b.s=100;
    // b.read();
    // b.display();
    // // b.chk_bin();
    // b.ones_compliment();
    // cout<<"\nThe binary number after ones compliment is: "<<endl;
    // b.display();

    // return 0;
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    cout << "After ones' complement ";
    b.display();

    return 0;
}
