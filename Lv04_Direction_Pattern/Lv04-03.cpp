#include <iostream>

using namespace std;
constexpr int len = 8;

struct MC
{
	char burger1[len];
	char burger2[len];
};

int Len(char* str)
{
	int i = 0;
	for(int i = 0; i < len; ++i)
	{
		if (str[i] == '\0')
			return i;

		i++;
	}
	return len;
}

int main()
{
	MC bob;
	MC tom;

	cin >> bob.burger1 >> bob.burger2;
	cin >> tom.burger1 >> tom.burger2;

	cout << "bob.burger1 = " << Len(bob.burger1) << endl;
	cout << "bob.burger2 = " << Len(bob.burger2) << endl;
	cout << "tom.burger1 = " << Len(tom.burger1) << endl;
	cout << "tom.burger2 = " << Len(tom.burger2) << endl;

	return 0;
}