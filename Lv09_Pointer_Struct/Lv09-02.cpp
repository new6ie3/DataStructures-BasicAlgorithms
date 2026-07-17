#include <iostream>

using namespace std;

int* simData[5] = {};

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	simData[0] = &a;
	simData[1] = &b;
	simData[2] = &c;
	simData[3] = &d;
	simData[4] = &e;

	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < 5; ++i)
	{
		if (*simData[i] > max)
			max = *simData[i];

		if (*simData[i] < min)
			min = *simData[i];
	}

	cout << "MAX:" << max << endl;
	cout << "MIN:" << min << endl;
	return 0;
}