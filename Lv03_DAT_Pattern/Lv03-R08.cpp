#include <iostream>

using namespace std;

int bucket[256];

void InputBucket(char* ch)
{
	size_t i = 0;
	while (ch[i] != '\0')
	{
		bucket[ch[i]]++;
		i++;
	}
}

bool IsOverlapInBucket()
{
	for (size_t i = 'A'; i <= 'Z'; ++i)
	{
		if (bucket[i] > 1)
			return false;
	}
	return true;
}

int main()
{
	char a[20];
	char b[20];
	char c[20];

	cin >> a >> b >> c;

	InputBucket(a);
	InputBucket(b);
	InputBucket(c);

	bool result = IsOverlapInBucket();

	if (result) cout << "Perfect";
	else cout << "No";

	return 0;
}