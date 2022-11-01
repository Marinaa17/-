
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    bool isPrime;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        isPrime = true;

        if (i == 0 || i == 1)
        {
            isPrime = false;
        }

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }
}