#include <iostream>
#include <vector>

using namespace std;

vector<int> singleNumber(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> result;

	for (size_t i = 0; i < nums1.size(); ++i)
	{
		for (size_t j = 0; j < nums2.size(); ++j)
		{
			if (nums1[i] == nums2[j])
			{
				result.push_back(nums2[j]);
				break;
			}
		}
	}

	return result;
}

int main()
{
	std::vector<int> nums1 = { 1,2,3,1 };
	std::vector<int> nums2 = { 2,2 };

	vector<int> result = singleNumber(nums1, nums2);

	return 0;
}