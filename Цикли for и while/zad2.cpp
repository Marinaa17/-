
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (a != b)
    {
        a > b ? a = a - b : b = b - a;
    }

    for (int i = 1; i <a; i++)
    {
        if (a % i == 0) 
        {
            cout << a / i<<" ";
        }
    }
}

