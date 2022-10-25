
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int e = number % 10;
	int d = number/10;

	if (number < 10)
	{
		switch (e)
		{
			case 1:
				cout << "one";
				break;
			case 2:
				cout << "two";
				break;
			case 3:
				cout << "three";
				break;
			case 4:
				cout << "four";
				break;
			case 5:
				cout << "five";
				break;
			case 6:
				cout << "six";
				break;
			case 7:
				cout << "seven";
				break;
			case 8:
				cout << "eight";
				break;
			case 9:
				cout << "nine";
				break;
			default:
				break;
		}
	}
	else if (number >= 10 && number < 20)
	{
		switch (e)
		{
			case 0:
				cout << "ten";
				break;
			case 1:
				cout << "eleven";
				break;
			case 2:
				cout << "twelve";
				break;
			case 3:
				cout << "thirteen";
				break;
			case 4:
				cout << "fourteen";
				break;
			case 5:
				cout << "fifteen";
				break;
			case 6:
				cout << "sixteen";
				break;
			case 7:
				cout << "seventeen";
				break;
			case 8:
				cout << "eighteen";
				break;
			case 9:
				cout << "nineteen";
				break;
			default:
				break;
		}
	}
	else if (number >= 20)
	{
		switch (d)
		{
			case 2:
				cout << "twenty";
				break;
			case 3:
				cout << "thirty";
				break;
			case 4:
				cout << "forty";
				break;
			case 5:
				cout << "fifty";
				break;
			case 6:
				cout << "sixty";
				break;
			case 7:
				cout << "seventy";
				break;
			case 8:
				cout << "eighty";
				break;
			case 9:
				cout << "ninty";
				break;
			default:
				break;
		}

		cout << " ";

		switch (e)
		{
			case 1:
				cout << "one";
				break;
			case 2:
				cout << "two";
				break;
			case 3:
				cout << "three";
				break;
			case 4:
				cout << "four";
				break;
			case 5:
				cout << "five";
				break;
			case 6:
				cout << "six";
				break;
			case 7:
				cout << "seven";
				break;
			case 8:
				cout << "eight";
				break;
			case 9:
				cout << "nine";
				break;
			default:
				break;
		}
	}
}






	