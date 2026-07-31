#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Rotate_ImageSolution(const vector<vector<int>> matrix)
{
	vector<vector<int>> result = matrix;

	for (size_t y = 0; y < matrix.size(); ++y)
	{
		for (size_t x = 0; x < matrix[y].size(); ++x)
		{
			result[y][x] = matrix[matrix.size() - 1 - x][y];
		}
	}

	return result;
}

int main()
{
	vector<vector<int>> matrix =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8 ,9}
	};

	matrix = Rotate_ImageSolution(matrix);

	for (size_t y = 0; y < matrix.size(); ++y)
	{
		for (size_t x = 0; x < matrix.size(); ++x)
		{
			cout << matrix[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}