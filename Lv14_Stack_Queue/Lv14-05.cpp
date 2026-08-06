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

	void AddNode(T data)
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

	void RemoveNode()
	{
		if (head == nullptr)
			return;

		Node* victim = head;
		head = head->next;
		
		delete victim;
	}

	void PrintNode()
	{
		Node* p = head;
		while (p != nullptr)
		{
			cout << p->data << ' ';
			p = p->next;
		}
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
	size_t enq = 5;
	size_t deq = 2;
	char data[5] = { 'A', 'B', 'C', 'G', 'K' };
	
	Queue<char> queue;
	for (size_t i = 0; i < enq; ++i)
		queue.AddNode(data[i]);

	for (size_t i = 0; i < deq; ++i)
		queue.RemoveNode();

	queue.PrintNode();
	return 0;
}