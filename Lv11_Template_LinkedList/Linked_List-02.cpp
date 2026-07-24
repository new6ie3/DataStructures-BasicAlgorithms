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
			if (p->data == data)
			{
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
	Node* head = nullptr;
	Node* tail = nullptr;
};

int main()
{
	List<int> myList;
	myList.Push_back(4);
	myList.Push_back(5);
	myList.Push_back(1);
	myList.Push_back(9);

	myList.Remove(1);

	return 0;
}