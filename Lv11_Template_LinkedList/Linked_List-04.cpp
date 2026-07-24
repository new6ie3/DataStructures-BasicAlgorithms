#include <iostream>

using namespace std;

template <typename T>
class List
{
public:
	struct Node
	{
		T data;
		Node* next;
	};

	void Push_front(T data)
	{
		if (head == nullptr)
		{
			head = new Node();
			head->data = data;
			head->next = nullptr;
			tail = head;
		}
		else
		{
			Node* prev = new Node();
			prev->data = data;
			prev->next = head;
			head = prev;
		}
	}

	void Remove(T data)
	{
		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (data == p->data)
			{
				if (head == tail)
				{
					delete head;
					head = nullptr;
					tail = nullptr;
					return;
				}
			}
		}
	}

	void Print_list()
	{
		for (Node* p = head; p != nullptr; p = p->next)
		{
			cout << p->data << ' ';
		}
	}

private:
	Node* head = nullptr;
	Node* tail = nullptr;
};


int main()
{
	List<int> myList;
	myList.Push_front(1);
	myList.Remove(1);

	myList.Print_list();
	return 0;
}