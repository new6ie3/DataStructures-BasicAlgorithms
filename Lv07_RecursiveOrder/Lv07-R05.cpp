#include <iostream>

using namespace std;

int map[3][6] =
{
	3, 5, 4, 2, 2, 3,
	1, 3, 3, 3, 4, 2,
	5, 4, 4, 2, 3, 5
};

char price[5] = { 'T', 'P', 'G', 'K', 'C' };

int main()
{
	char a, b;
	cin >> a >> b;

	int value = map[a - 'A'][b - '1'];
	int index = value - 1;

	char result = price[index];
	
	cout << result << endl;

	return 0;
}