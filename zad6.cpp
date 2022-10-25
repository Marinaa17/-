
#include <iostream>
using namespace std;

int main()
{
	double number;			
	cin >> number;				

	double check = round(number);

	if (number==check)
	{
		if ((int)number%2==0)
		{
			cout << "Even integer";
		}
		else
		{
			cout << "Odd integer";
		}
	}
	else
	{
		if (number>0)
		{
			cout << "Positive rational";
		}
		else
		{
			cout << "Negative rational";
		}
	}
}