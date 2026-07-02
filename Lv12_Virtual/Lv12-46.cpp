#include <iostream>

using namespace std;

class Subject
{
public:
	virtual void Requst() = 0;
};

class RealSubject : public Subject
{
public:
	void Requst() override
	{
		cout << "RealSubject Request" << endl;
	}
};

class Proxy : public Subject
{
public:
	Proxy(RealSubject* _real) : real(_real) {}

	void Requst() override
	{
		real->Requst();
	}

private:
	RealSubject* real;
};

int main()
{
	RealSubject real;
	Proxy proxy(&real);

	Subject* subjects[] = { &real, &proxy };
	for (int i = 0; i < 2; ++i)
		subjects[i]->Requst();

	return 0;
}
