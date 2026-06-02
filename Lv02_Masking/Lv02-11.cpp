#include <iostream>

using namespace std;

bool IsSame(char* a, char* b)
{

	int i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
			return false;

		i++;
	}

	return a[i] == b[i];
}

int main()
{
	char a[20];
	char b[20];
	cin >> a >> b;

	bool result = IsSame(a, b);

	if(result)
		cout << "동명" << endl;
	else
		cout << "남남" << endl;

	return 0;
}