#include <iostream>

class SortedArray
{
public:
	SortedArray()
	{
		p = nullptr;
		size = 0;
	}

	SortedArray(int src[], int size)
	{
		this->size = size;

		p = new int[size];

		for (int i = 0; i < size; ++i)
			p[i] = src[i];

		Sort();
	}

	SortedArray(const SortedArray& src)
	{
		size = src.size;

		p = new int[size];

		for (int i = 0; i < size; ++i)
			p[i] = src.p[i];
	}

	~SortedArray()
	{
		delete[] p;
	}

	SortedArray operator+(const SortedArray& op2)
	{
		SortedArray result;
		result.size = size + op2.size;
		result.p = new int[result.size];

		for (int i = 0; i < size; ++i)
			result.p[i] = p[i];

		for (int i = 0; i < op2.size; ++i)
			result.p[size + i] = op2.p[i];

		result.Sort();

		return result;
	}
	SortedArray& operator=(const SortedArray& op2)
	{
		delete[] p;

		size = op2.size;
		p = new int[size];

		for (int i = 0; i < size; ++i)
			p[i] = op2.p[i];

		return *this;
	}

	void Show()
	{
		std::cout << "배열 출력 : ";

		for (int i = 0; i < size; ++i)
			std::cout << p[i] << ' ';

		std::cout << std::endl;
	}

private:
	void Sort()
	{
		for (int i = 0; i < size - 1; ++i)
		{
			for (int j = i; j < size - 1; ++j)
			{
				if (p[j] > p[j + 1])
				{
					int temp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = temp;
				}
			}
		}
	}

	int size;
	int* p;
};

int main()
{
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };

	SortedArray a(n, 3);
	SortedArray b(m, 4);
	SortedArray c;

	c = a + b;

	a.Show();
	b.Show();
	c.Show();

	return 0;
}