#include <iostream>

using namespace std;

class Handler
{
public:
	virtual void HandleRequest(int level) = 0;
	virtual void SetNext(Handler* _handler) = 0;

protected:
	Handler* next;
	int level = 0;
};

class ConcreteHandlerA : public Handler
{
public:
	ConcreteHandlerA() { level = 1; }
	void HandleRequest(int level) override
	{
		if (this->level == level)
			cout << "HandlerA " << level << " 贸府 肯丰" << endl;
		else
			next->HandleRequest(level);
		
	}
	void SetNext(Handler* _handler) override
	{
		next = _handler;
	}

};

class ConcreteHandlerB : public Handler
{
public:
	ConcreteHandlerB() { level = 2; }
	void HandleRequest(int level) override
	{
		if (this->level == level)
			cout << "HandlerB " << level << " 贸府 肯丰" << endl;
		else
			next->HandleRequest(level);

	}
	void SetNext(Handler* _handler) override
	{
		next = _handler;
	}

};

class ConcreteHandlerC : public Handler
{
public:
	ConcreteHandlerC() { level = 3; }
	void HandleRequest(int level) override
	{
		if (this->level == level)
			cout << "HandlerC " << level << " 贸府 肯丰" << endl;
		else
			next->HandleRequest(level);

	}
	void SetNext(Handler* _handler) override
	{
		next = _handler;
	}

};

int main()
{
	ConcreteHandlerA handlerA;
	ConcreteHandlerB handlerB;
	ConcreteHandlerC handlerC;

	handlerA.SetNext(&handlerB);
	handlerB.SetNext(&handlerC);
	handlerA.HandleRequest(1);
	handlerA.HandleRequest(3);

	return 0;
}
