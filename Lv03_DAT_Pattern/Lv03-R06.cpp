#include <iostream>

using namespace std;

int win[2][3] =
{
	3, 5, 1,
	4, 2, 6
};

bool Test(int person)
{
	for (size_t i = 0; i < 6; ++i)
	{
		if (person == win[i / 3][i % 3])
			return true;
	}
	
	return false;
}

int main()
{
	int people[4];
	for (size_t i = 0; i < 4; ++i)
		cin >> people[i];

	for (size_t i = 0; i < 4; ++i)
	{
		bool result = Test(people[i]);

		if (result)
			cout << people[i] << "번 합격" << endl;
		else
			cout << people[i] << "번 불합격" << endl;
	}

	return 0;
}