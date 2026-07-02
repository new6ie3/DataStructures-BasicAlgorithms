#include <iostream>

using namespace std;

class SortStrategy
{
public:
	virtual void Sort() = 0;

protected:
	int arr[6] = { 5, 1, 9, 7, 2, 3 };
};

class BubbleSort : public SortStrategy
{
public:
	void Sort() override
	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
};

class QuickSort : public SortStrategy
{
public:
	void Sort() override
	{
		Sort(&arr[0], 0, 5);
		Sort(&arr[0], 0, 2);
		Sort(&arr[3], 3, 5);
	}

private:
	void Sort(int* _pivot, int start, int end)
	{
		int half = (end - start) * 0.5f;

		int* pivot = _pivot;
		int* big = nullptr, * small = nullptr;

		for (int j = 0; j < 2; ++j)
		{
			for (int i = start + 1; i <= half; ++i)
			{
				if (*pivot < arr[i])
				{
					big = &arr[i];
					break;
				}
			}

			for (int i = end; i > half; --i)
			{
				if (*pivot > arr[i])
				{
					small = &arr[i];
					break;
				}
			}

			if (big != nullptr && small != nullptr)
			{
				int temp = *big;
				*big = *small;
				*small = temp;

				big = nullptr;
				small = nullptr;
			}
			else if (big == nullptr && small != nullptr)
			{
				int temp = *pivot;
				*pivot = *small;
				*small = temp;

				return;
			}
			else if (small == nullptr && big != nullptr)
			{
				int temp = *pivot;
				*pivot = *big;
				*big = temp;

				return;
			}
			else
			{
				int temp = *pivot;
				*pivot = *(pivot + 1);
				*(pivot + 1) = temp;

				return;
			}
		}
	}

};

class Sorter
{
public:
	Sorter(SortStrategy* _sort) : sort(_sort) {}
	
	void PerformSort() const
	{
		sort->Sort();
	}

	void SetStrategy(SortStrategy* _sort)
	{
		sort = _sort;
	}

private:
	SortStrategy* sort;
};

int main()
{
	BubbleSort bubble;
	QuickSort quick;

	Sorter sorter(&bubble);
	sorter.PerformSort();
	
	sorter.SetStrategy(&quick);
	sorter.PerformSort();

	return 0;
}