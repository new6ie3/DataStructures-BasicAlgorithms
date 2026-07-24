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

	bool Palindrome()
	{
		T datas[10];
		size_t i = 0;
		for (Node* p = head; p != nullptr; p = p->next)
		{
			datas[i++] = p->data;
		}

		Reverse();
		i = 0;

		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (datas[i] != p->data)
			{
				Reverse();
				return false;
			}

			i++;
		}

		Reverse();
		return true;
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

	list.Push_back(1);
	list.Push_back(2);
	list.Push_back(2);
	list.Push_back(1);

	bool result = list.Palindrome();
	cout << result << endl;

	return 0;
}