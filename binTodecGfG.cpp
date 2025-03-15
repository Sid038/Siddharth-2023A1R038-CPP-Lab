#include <iostream>
using namespace std;

class Solution
{
public:
    int binaryToDecimal(string &b)
    {
        int dec_value = 0;
        int base = 1;
        int length = b.length();
        for (int i = length - 1; i >= 0; i--)
        {
            if (b[i] == '1')
            
                dec_value += base;
                base = base * 2;
            
            // else
            // {
            //     cout << "Invalid Binary Number";
            // }
        }

        return dec_value;
    }
};

int main()
{

    Solution obj;
    // string b = "11";
    string b;
    cout << "Enter Binary Number" << endl;
    cin >> b;
    int res = obj.binaryToDecimal(b);
    cout << "Binary number converted to decimal is: " << res;
    return 0;
}
