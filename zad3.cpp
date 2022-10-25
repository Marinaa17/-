
#include <iostream>
using namespace std;

int main()
{
	double number1, number2;
	cin >> number1>>number2;

	double plus = number1 + number2;
	double minus = number1 - number2;		
	double multiply = number1 * number2;	
	double divide = number1 / number2;	

	double max = plus;		

	if (minus>max)
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