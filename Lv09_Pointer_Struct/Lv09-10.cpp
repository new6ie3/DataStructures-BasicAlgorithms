#include <iostream>

using namespace std;

char str[10];
int datas[4];
char* ptr[4];

int main()
{
	cin >> str;
	for (int i = 0; i < 4; ++i)
	{
		cin >> datas[i];
		ptr[i] = &str[datas[i]];
	}
	
	for (int i = 0; i < 4; ++i)
	{
		cout << *ptr[i];
	}

	return 0;
}