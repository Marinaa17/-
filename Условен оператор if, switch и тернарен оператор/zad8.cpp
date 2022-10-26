#include <iostream>
using namespace std;

int main()
{
	int number1, number2, number3;
	cin >> number1>>number2>>number3;

	int biggest, middle, smallest;

	if (number1 > number2 && number1 > number3)
	{
		biggest = number1;

		if (number2 > number3)
		{
			middle = number2;
			smallest = number3;
		}
		else
		{
			middle = number3;
			smallest = number2;
		}
	}
	else if (number2 > number1 && number2 > number3)
	{
		biggest = number2;

		if (number1 > number3)
		{
			middle = number1;
			smallest = number3;
		}
		else
		{
			middle = number3;
			smallest = number1;
		}
	}
	else if (number3 > number1 && number3 > number2)
	{
		biggest = number3;

		if (number1 > number2)
		{
			middle = number1;
			smallest = number2;
		}
		else
		{
			middle = number2;
			smallest = number1;
		}
	}
	else
	{
		smallest = number1;
		middle = number2;
		biggest = number3;
	}
	
	if (number1==0 && number2==0 && number3==0)
	{
		cout << 0;
	}
	else
	{
		cout << biggest<< " " << middle<< " " << smallest;
	}
}
