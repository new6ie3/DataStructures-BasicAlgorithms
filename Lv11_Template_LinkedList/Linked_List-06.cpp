#include <iostream>

using namespace std;

class List
{
public:
	struct Node
	{
		int data;
		Node* next;
	};

	void Push_back(int data)
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

	void Reverse()
	{
		Node* prev = nullptr;
		Node* curr = head;
		Node* next = nullptr;

		while (curr != nullptr)
		{
			next = curr->next;
			curr->next = prev;

			prev = curr;
			curr = next;
		}

		tail = head;
		head = prev;
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
	List myList;
	myList.Push_back(1);
	myList.Push_back(2);
	myList.Push_back(3);
	myList.Push_back(4);
	myList.Push_back(5);

	myList.Reverse();
	myList.Print_list();

	return 0;
}