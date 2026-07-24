#include <iostream>

using namespace std;

template <typename T>
class MyList
{
public:
	struct Node
	{
		T data;
		Node* next;
	};

	MyList()
	{
		head = nullptr;
		tail = nullptr;
	}

	void Push_back(T data)
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
			tail->next = new Node();
			tail->next->data = data;
			tail->next->next = nullptr;
			tail = tail->next;
		}
	}

	void Remove(T data)
	{
		Node* prev = nullptr;
		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (data == p->data)
			{
				if(prev != nullptr)
					prev->next = prev->next->next;

				delete p;
				return;
			}
			prev = p;
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
	Node* head;
	Node* tail;
};

int main()
{
	MyList<int> list;

	list.Push_back(4);
	list.Push_back(5);
	list.Push_back(1);
	list.Push_back(9);

	list.Remove(5);
	list.Print_list();

	return 0;
}