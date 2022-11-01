
#include <iostream>
using namespace std;

int main()
{
    int number;
    bool flag = true;
    cin >> number;
    
    if (number == 0)
    {
        flag = false;
    }
    else
    {
        while (number != 1)
        {
            if (number % 2 == 0)
            {
                number = number / 2;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    
    flag ? cout<<"true" : cout << "false";
}
