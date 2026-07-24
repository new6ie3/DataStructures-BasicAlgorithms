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

	void Push(T data, size_t nextIdx)
	{
		tail->next = new Node();
		tail->next->data = data;

		size_t i = 0;
		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (i == nextIdx)
			{
				tail->next->next = p;
				return;
			}
			i++;
		}
		tail = tail->next;
	}

	bool Cycle()
	{
		if (tail->next != nullptr)
			return true;

		return false;
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
	List<int> list;

	list.Push_back(3);
	list.Push_back(2);
	list.Push_back(0);
	list.Push(-4, 1);

	bool result = list.Cycle();
	cout << result << endl;

	return 0;
}