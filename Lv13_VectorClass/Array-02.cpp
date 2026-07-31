#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& nums)
{
	int max = 0;

	for (size_t i = 0; i < nums.size() - 1; ++i)
	{
		if (nums[i] < nums[i + 1])
			max += nums[i + 1] - nums[i];
	}

	return max;
}
int main()
{
	std::vector<int> prices = { 7, 1, 5, 3, 6, 4 };
	int maxProfitValue = maxProfit(prices);

	return 0;
}