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

	void Erase_back(size_t idx)
	{
		size_t targetIdx = Size() - idx;
		size_t count = 0;

		Node* prev = nullptr;
		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (count == targetIdx)
			{
				prev->next = p->next;

				delete p;
				return;
			}

			prev = p;
			count++;
		}
	}

	size_t Size()
	{
		size_t count = 0;
		Node* p = head;
		while (p != nullptr)
		{
			count++;
			p = p->next;
		}

		return count;
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
	myList.Push_back(1);
	myList.Push_back(2);
	myList.Push_back(3);
	myList.Push_back(4);
	myList.Push_back(5);

	myList.Erase_back(4);
	myList.Print_list();
	return 0;
}