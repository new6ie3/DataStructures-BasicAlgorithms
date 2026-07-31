#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        digits[digits.size() - 1]++;
        return digits;
    }
};

int main()
{
    vector<int> digits = { 1, 2, 3 };
    Solution sol;

   digits = sol.plusOne(digits);
   for (size_t i = 0; i < digits.size(); ++i)
       cout << digits[i] << ' ';

    return 0;
}