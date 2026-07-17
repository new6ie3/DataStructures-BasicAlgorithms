#include <iostream>

using namespace std;

struct Vector2
{
	int x;
	int y;
};

int main()
{
	Vector2 vec[6];
	for (int i = 0; i < 6; ++i)
		cin >> vec[i].y >> vec[i].x;

	bool result = false;
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (i == j) 
				continue;

			if (vec[i].y == vec[j].y && vec[i].x == vec[j].x)
			{
				result = true;
				i = 6;
				break;
			}
		}
	}

	if (result)
		cout << "중복된좌표발견";
	else
		cout << "중복 없음";

	return 0;
}