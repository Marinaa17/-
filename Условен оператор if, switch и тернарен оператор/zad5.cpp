
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	bool equals = false;

	int d1= number % 10;
	number /= 10;

	int d2 = number % 10;
	number /= 10;

	int d3 = number % 10;

	if (d1==d2 || d1==d3 || d2==d3 )
	{
		equals = true;
	}

	cout << equals;
}