#include <iostream>

using namespace std;

class Builder
{
public:
	virtual void BuildPart1() = 0;
	virtual void BuildPart2() = 0;
	virtual void GetResult() const = 0;
};

class ConcreteBuilderA : public Builder
{
public:
	void BuildPart1() override
	{
		cout << "BuildPart1 A" << endl;
	}
	void BuildPart2() override
	{
		cout << "BuildPart2 A" << endl;
	}
	void GetResult() const override
	{
		cout << "Result : A" << endl;
	}
};

class ConcreteBuilderB : public Builder
{
public:
	void BuildPart1() override
	{
		cout << "BuildPart1 B" << endl;
	}
	void BuildPart2() override
	{
		cout << "BuildPart2 B" << endl;
	}
	void GetResult() const override
	{
		cout << "Result : B" << endl;
	}
};

int main()
{
	ConcreteBuilderA builderA;
	ConcreteBuilderB builderB;

	Builder* builders[] = { &builderA, &builderB };
	for (int i = 0; i < 2; ++i)
	{
		builders[i]->BuildPart1();
		builders[i]->BuildPart2();
		builders[i]->GetResult();
	}

	return 0;
}
