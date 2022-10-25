
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >>a>>b>>c;

	bool exist=false;

	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		exist = true;
	}

	cout << exist;
}