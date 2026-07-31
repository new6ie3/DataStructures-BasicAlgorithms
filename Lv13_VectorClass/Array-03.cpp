#include <iostream>
#include <vector>

using namespace std;

void Rolls(vector<int>& nums, size_t k)
{
	for (size_t j = 0; j < k; ++j)
	{
		int temp = nums[nums.size() - 1];
		for (size_t i = nums.size() - 1; i > 0; --i)
		{
			nums[i] = nums[i - 1];
		}
		nums[0] = temp;
	}

}

int main()
{
	vector<int> nums = { 1, 2, 3, 4, 5 ,6 ,7 };
	size_t k = 3;

	Rolls(nums, k);

	for (size_t i = 0; i < nums.size(); ++i)
		cout << nums[i] << ' ';

	return 0;
}