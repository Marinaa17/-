
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int number;
    cin >> number;

	int numOfDigits = 0;
	int tempNum = number;

	while (tempNum!=0)
	{
		tempNum = tempNum / 10;
		numOfDigits++;
	}

	if (numOfDigits<10)
	{
		cout <<0<< " " << 1;
	}
	else if (numOfDigits%2==0)
	{
		int firstHalf = number / pow(10, (numOfDigits/ 2+1));
		int secondHalfDiv = pow(10, numOfDigits / 2 -1);

		cout << firstHalf << number % secondHalfDiv <<" "<<firstHalf<<number% secondHalfDiv +1;
	}
	else
	{
		int firstHalf = number / pow(10, (numOfDigits +1) / 2);
		int secondHalfDiv = pow(10, (numOfDigits - 1) / 2);

		cout <<firstHalf<<number % secondHalfDiv << " " << firstHalf << number % secondHalfDiv + 1;
	}
}
