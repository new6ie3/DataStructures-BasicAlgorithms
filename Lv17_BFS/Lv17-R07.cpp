#include <iostream>

using namespace std;

int frames[5] = {};

int main()
{
	int index, life;
	cin >> index >> life;

	for (int i = 0; i < life + 3; ++i)
	{
		frames[index] = life;
		for (int j = 0; j < 5; ++j)
		{
			if (frames[j] == 0)
				cout << '_';
			else
				cout << frames[j];
		}
		cout << endl;
		frames[index] = 0;
		index++;
		life--;
	}


	return 0;
}