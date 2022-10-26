
#include <iostream>
using namespace std;

int main()
{
	double number1, number2;
	cin >> number1>>number2;

	double plus = number1 + number2;
	double multiply = number1 * number2;
	double minus,divide;	
	
	double max = plus;	

	if ((number1 - number2)> (number2 - number1))
	{
		minus = number1 - number2;
	}
	else
	{
		minus = number2 - number1;
	}

	if (number1==0 || number2 == 0)
	{
		divide = 0;
	}
	else
	{
		if ((number1 / number2) > (number2 / number1))
		{
			divide = number1 / number2;
		}
		else
		{
			divide = number2 / number1;
		}
	}

	if (minus>max )
	{
		max = minus;
	}
	if (multiply>max)
	{
		max = multiply;
	}
	if (divide > max)
	{
		max = divide;
	}

	cout << max;
}
