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

	void Merge_Sort(Node* other_head)
	{
		for (Node* p = other_head; p != nullptr; p = p->next)
		{
			tail->next = p;
			tail = tail->next;
		}

		for (Node* p = head; p != tail; p = p->next)
		{
			for (Node* q = p; q != tail; q = q->next)
			{
				if (q->data > q->next->data)
				{
					T temp = q->data;
					q->data = q->next->data;
					q->next->data = temp;
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

	Node* GetHead() const { return head; }

private:
	Node* head = nullptr;
	Node* tail = nullptr;
};

int main()
{
	List<int> list1;
	List<int> list2;

	list1.Push_back(1);
	list1.Push_back(2);
	list1.Push_back(4);
	list2.Push_back(1);
	list2.Push_back(3);
	list2.Push_back(4);

	list1.Merge_Sort(list2.GetHead());
	list1.Print_list();
	return 0;
}