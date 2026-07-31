#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums)
{
	int result = 0;
	int* bucket = new int[60000] {};

	for (int i = 0; i < nums.size(); ++i)
	{
		bucket[nums[i]]++;
	}
	
	for (int i = 0; i < 60000; ++i)
	{
		if (bucket[i] == 1)
		{
			result = i;
			break;
		}
	}

	delete[] bucket;
	return result;
}

int main()
{
	std::vector<int> nums = { 2, 2, 1, 3, 3 };
	int result = singleNumber(nums);

	return 0;
}