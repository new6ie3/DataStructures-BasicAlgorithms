#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class RandomizedSet
{
public:
	RandomizedSet(){}

	bool Insert(int val)
	{
		if (bucket[val])
			return false;

		set.push_back(val);

		bucket[val] = set.size();

		return true;
	}

	bool Remove(int val)
	{
		if (!bucket[val])
			return false;

		int index = bucket[val] - 1;
		int last = set.back();

		set[index] = last;
		bucket[last] = index + 1;

		set.pop_back();
		bucket[val] = 0;

		return true;
	}
	
	int GetRandom()
	{
		vector<int>::iterator iter = set.begin() + rand() % set.size();
		return *iter;
	}

private:
	vector<int> set;
	int bucket[10] = {};
};

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	RandomizedSet* randomizedSet = new RandomizedSet();

	cout << randomizedSet->Insert(1) << endl;
	cout << randomizedSet->Remove(1) << endl;
	cout << randomizedSet->Insert(2) << endl;
	cout << randomizedSet->GetRandom() << endl;
	cout << randomizedSet->Remove(1) << endl;
	cout << randomizedSet->Insert(2) << endl;
	cout << randomizedSet->GetRandom() << endl;

	delete randomizedSet;
	return 0;
}