#include <iostream>

using namespace std;

int evid[] = { -1, 0, 0, 1, 2, 4, 4 };
int timeStemp[] = {8, 3, 5, 6, 8, 9, 10 };

void Run(int idx)
{
	if (evid[idx] == -1)
	{
		cout << idx << "번 index (출발)" << endl;
		return;
	}

	Run(evid[idx]);
	cout << idx << "번 index (" << timeStemp[idx] << "시)" << endl;

}

int main()
{
	int index;
	cin >> index;

	Run(index);

	return 0;
}