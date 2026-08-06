#include <iostream>

using namespace std;

template <typename T>
class Queue
{
public:
	Queue()
	{
		size_t input;
		cin >> input;

		for (size_t i = 0; i < input; ++i)
		{
			char word;
			T data;
			cin >> word >> data;
			Input(word, data);
		}

		Print();
	}

	void Input(char ch, T data)
	{
		switch (ch)
		{
		case 'E':
			Pushback(data);
			break;

		case 'D':
			Pop();
		}
	}

	void Pushback(T data)
	{
		Node* node = new Node();
		node->data = data;
		node->next = nullptr;

		if (top == nullptr)
			top = node;
		else
		{
			for (Node* p = top; p != nullptr; p = p->next)
			{
				if (p->next == nullptr)
				{
					p->next = node;
					break;
				}
			}
		}
	}

	void Pop()
	{
		if (top == nullptr)
		{
			cout << "Error" << endl;
			return;
		}

		Node* victim = top;
		top = top->next;

		delete victim;
	}

	void Print()
	{
		for (Node* p = top; p != nullptr; p = p->next)
		{
			cout << p->data << ' ';
		}
	}

private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* top = nullptr;
};

int main()
{
	Queue<int> queue;

	return 0;
}