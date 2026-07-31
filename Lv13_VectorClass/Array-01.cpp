#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums)
{
	int ret = 0;
	int prev = -1;
	for (size_t i = 0; i < nums.size(); ++i)
	{
		if (prev != nums[i])
		{
			prev = nums[i];
			ret++;

			if(i != 0) nums[i - 1] = nums[i];
		}
	}

	return ret;
}

int main()
{
	vector<int> nums = { 1, 1, 2, 3, 3 };
	int newLength = removeDuplicates(nums);

	cout << "New length: " << newLength << endl;
	cout << "Modified array: ";

	for (int i = 0; i < newLength; ++i)
	{
		cout << nums[i] << " ";
	}
	cout << endl;


	return 0;
}