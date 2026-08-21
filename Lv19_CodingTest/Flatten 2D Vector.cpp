#include <iostream>
#include <vector>

using namespace std;

class Vector2D
{
public:
	Vector2D(vector<vector<int>> _vec) : vec(_vec), idx(0)
	{
		iter = vec[idx].begin();
		size = vec.size();
	}

	int Next()
	{
		while (idx < size)
		{
			if (iter != vec[idx].end())
			{
				int value = *iter;
				++iter;

				return value;
			}

			++idx;

			if (idx < size)
				iter = vec[idx].begin();
		}

		return -1;
	}

	bool HasNext()
	{
		while (idx < size)
		{
			if (iter != vec[idx].end())
				return true;

			++idx;

			if (idx < size)
				iter = vec[idx].begin();
		}

		return false;
	}

private:
	vector<vector<int>> vec;
	vector<int>::iterator iter;
	size_t size;
	size_t idx;
};

int main()
{
	Vector2D* vector2D = new Vector2D({{ 1, 2 }, { 3 }, { 4 }});
	cout << vector2D->Next() << endl;
	cout << vector2D->Next() << endl;
	cout << vector2D->Next() << endl;
	cout << vector2D->HasNext() << endl;
	cout << vector2D->Next() << endl;
	cout << vector2D->HasNext() << endl;

	delete vector2D;
	return 0;
}