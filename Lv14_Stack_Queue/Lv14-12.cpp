#include <iostream>

using namespace std;

template <typename T>
class Queue
{
public:
	Queue()
	{
		head = nullptr;
		tail = nullptr;
	}

	~Queue()
	{
		Node* cur = head;
		while (cur != nullptr)
		{
			Node* next = cur->next;
			delete cur;
			cur = next;
		}

		head = nullptr;
		tail = nullptr;
	}

	void Enqueue(T data)
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

	T Dequeue()
	{
		if (head == nullptr)
			return 0;

		Node* victim = head;
		head = head->next;

		T data = victim->data;
		cout << data << ' ';
		delete victim;

		return data;
	}

	void Select()
	{
		T data = Dequeue();
		Enqueue(data);
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
	Queue<char> queue;

	queue.Enqueue('B');
	queue.Enqueue('I');
	queue.Enqueue('A');
	queue.Enqueue('H');

	for (size_t i = 0; i < 4; ++i)
	{
		queue.Select();
	}

	return 0;
}