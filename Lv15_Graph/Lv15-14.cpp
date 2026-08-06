#include <iostream>

using namespace std;

template <typename T>
class List
{
public:
	List(size_t size, T* data)
	{
		head = nullptr;
		tail = nullptr;

		for (size_t i = 0; i < size; ++i)
		{
			Add(data[i]);
		}
	}

	void Add(T data)
	{
		Node* node = new Node();
		node->data = data;
		node->next = nullptr;

		if (head == nullptr)
		{
			head = node;
			tail = node;
		}
		else
		{
			tail->next = node;
			tail = node;
		}
	}

	void Print()
	{
		for (Node* p = head; p != nullptr; p = p->next)
			cout << p->data << ' ';
	}

private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* head;
	Node* tail;
};

int main()
{
	char data[4] = { 'A', 'B', 'C', 'D' };
	List<char> list(4, data);

	list.Print();

	return 0;
}