
#include <iostream>
using namespace std;

int main()
{
	int card1, card2;
	cin >> card1 >> card2;

	int card1Points, card2Points;
	bool over21 = false;

	if ((card1>=11 && card1<=13))
	{
		card1Points = 10;
	}
	else if(card1==1)
	{
		card1Points = 11;
	}
	else
	{
		card1Points = card1;
	}

	if ((card2 >= 11 && card2 <= 13))
	{
		card2Points = 10;
	}
	else if (card2 == 1)
	{
		card2Points = 11;
	}
	else
	{
		card2Points = card1;
	}

	if ((card1Points+card2Points)>21)
	{
		over21 = true;
	}
	cout<< over21;
}
