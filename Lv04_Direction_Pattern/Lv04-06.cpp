#include <iostream>

using namespace std;

struct Train
{
	int win;
	char name[7];
};

Train train[7] =
{
	15, "summer",
	33, "cloe",
	24, "summer",
	28, "niki",
	32, "jenny",
	20, "summer",
	40, "coco"
};

bool IsSame(char* str1, char* str2)
{
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return false;

		i++;
	}

	return true;
}

int Find(char* name, int age)
{
	for (size_t i = 0; i < 7; ++i)
	{
		if (age == train[i].win)
		{
			bool result = IsSame(name, train[i].name);
			if (result == true) return i;
		}
	}

	return -1;
}

int main()
{
	char name[10];
	int age;
	cin >> name >> age;

	int result = Find(name, age);
	cout << result << endl;

	return 0;
}