#include <iostream>

using namespace std;

int switchCoin[4] = { 35, 17, 7, 1 };
int switchCoinCount[4] = {};

int main()
{
	int coin;
	cin >> coin;

	while (coin != 0)
	{
		for (size_t i = 0; i < 4; ++i)
		{
			if (coin / switchCoin[i] != 0)
			{
				switchCoinCount[i] = coin / switchCoin[i];
				coin = coin - switchCoin[i] * switchCoinCount[i];
				break;
			}
		}
	}

	return 0;
}