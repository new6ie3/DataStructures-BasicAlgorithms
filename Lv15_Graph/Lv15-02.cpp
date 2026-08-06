#include <iostream>

using namespace std;

struct ABC
{
public:
	ABC(const int (&_data)[], int _x) : x(_x)
	{
		for (size_t i = 0; i < 4; ++i)
			data[i] = _data[i];
	}

	void Print()
	{
		for (size_t i = 0; i < 4; ++i)
		{
			cout << data[i] << ' ';
		}
		cout << endl;
		cout << x << endl;
	}

private:
	int data[4];
	int x;
};

int main()
{
	ABC a = { { 1,2,3,4 }, 10 };
	ABC b = { { 7,8,9,10}, 15 };

	ABC* p = &a;
	ABC* g = &b;

	p->Print();
	g->Print();

	return 0;
}