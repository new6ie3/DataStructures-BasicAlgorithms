#include <iostream>

class MinStack
{
private:
	struct Node
	{
		int data;
		int min;
		Node* next;
	};

	Node* top;
	Node* tail;

public:
	MinStack()
	{
		top = nullptr;
		tail = nullptr;
	}

	~MinStack()
	{
		while (top != nullptr)
		{
			Node* victim = top;
			top = top->next;
			delete victim;
		}

		tail = nullptr;
	}

	void Push(int val)
	{
		Node* node = new Node();
		node->data = val;

		if (top == nullptr)
		{
			node->min = val;
			node->next = nullptr;

			top = node;
			tail = node;
		}
		else
		{
			node->min = (val < top->min) ? val : top->min;
			node->next = top;
			top = node;
		}
	}

	void Pop()
	{
		if (top == nullptr)
			return;

		Node* victim = top;
		top = top->next;

		delete victim;
	}

	Node* GetTop() { return top; }

	int GetMin() const
	{
		if (top == nullptr)
			return INT_MAX;

		return top->min;
	}
};

int main()
{
	MinStack minstack;
	minstack.Push(10);
	minstack.Push(-2);
	minstack.Push(0);
	minstack.Push(-3);
	std::cout << minstack.GetMin() << std::endl;
	minstack.Pop();
	minstack.GetTop();
	std::cout << minstack.GetMin() << std::endl;
	return 0;
}