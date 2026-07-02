#include <iostream>

using namespace std;

class Filter
{
public:
	virtual string Apply(string input) const = 0;
};

class UpperCaseFilter : public Filter
{
public:
	string Apply(string input) const override
	{
		string str = input;
		for (size_t i = 0; i < str.length(); ++i)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		
		return str;
	}
};

class LowerCaseFilter : public Filter
{
public:
	string Apply(string input) const override
	{
		string str = input;
		for (size_t i = 0; i < str.length(); ++i)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}

		return str;
	}
};

class ReverseFilter : public Filter
{
public:
	string Apply(string input) const override
	{
		string str = input;
		int half = str.length() * 0.5f;

		for (int i = 0; i < half; ++i)
		{
			char temp = str[i];
			str[i] = str[str.length() - (i + 1)];
			str[str.length() - (i + 1)] = temp;
		}

		return str;
	}
};

int main()
{
	UpperCaseFilter upper;
	LowerCaseFilter lower;
	ReverseFilter reverse;

	Filter* filters[] = { &upper, &lower, &reverse };
	for (int i = 0; i < 3; ++i)
		cout << filters[i]->Apply("Hello") << endl;

	return 0;
}