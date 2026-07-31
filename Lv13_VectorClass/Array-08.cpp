#include <iostream>
#include <vector>

std::pair<int, int> TwoSum(std::vector<int>& nums, int target)
{
	for (size_t i = 0; i < nums.size() - 1; ++i)
	{
		for (size_t j = i + 1; j < nums.size(); ++j)
		{
			if (nums[i] + nums[j] == target)
			{
				return { i, j };
			}
		}
	}

	return { -1, -1 };
}

int main()
{
	std::vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	auto result = TwoSum(nums, target);

	return 0;
}