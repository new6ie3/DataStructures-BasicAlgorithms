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
			head = new Node;
			head->data = data;
			head->next = nullptr;
			tail = head;
		}
		else
		{
			tail->next = new Node;
			tail->next->data = data;
			tail->next->next = nullptr;
			tail = tail->next;
		}
	}

	size_t Size()
	{
		size_t size = 0;
		Node* p = head;
		while (p != nullptr)
		{
			size++;
			p = p->next;
		}

		return size;
	}

	void Erase_back(size_t idx)
	{
		size_t targetIdx = Size() - idx;
		size_t currentIdx = 0;

		Node* prev = nullptr;
		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (currentIdx == targetIdx)
			{
				if (p->next == nullptr)
				{
					tail = prev;
				}
				else
				{
					prev->next = p->next;
				}

				delete p;
				return;
			}

			prev = p;
			currentIdx++;
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

	myList.Erase_back(1);
	return 0;
}