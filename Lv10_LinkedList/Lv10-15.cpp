#include <iostream>
#include <random>
using namespace std;

class Array
{
public:
	Array(int num) : count(num)
	{
		ary = new int[num];

		for (int i = 0; i < count; ++i)
			ary[i] = rand() % 10;
	}

	~Array()
	{
		delete ary;
	}

	void PrintArray()
	{
		for (int i = 0; i < count; ++i)
			cout << ary[i] << ' ';

		cout << endl;
	}

private:
	int count;
	int* ary;
};

int main()
{
	srand(time(NULL));

	Array arr1(3);
	Array arr2(5);

	arr1.PrintArray();
	arr2.PrintArray();

	return 0;
}