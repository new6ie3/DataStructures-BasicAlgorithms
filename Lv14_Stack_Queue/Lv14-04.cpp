#include <iostream>

using namespace std;

template <typename T, typename Y>
class List
{
public:
	List()
	{
		head = nullptr;
	}

	~List()
	{
		Node* cur = head;
		while (cur != nullptr)
		{
			Node* next = cur->p;
			delete cur; 
			cur = next;  
		}

		head = nullptr;
	}

	void AddNode(T _a, Y _b)
	{
		Node* node = new Node();
		node->a = _a;
		node->b = _b;
		node->p = nullptr;

		if (head == nullptr)
		{
			head = node;
		}
		else
		{
			for (Node* n = head; n != nullptr; n = n->p)
			{
				if (n->p != nullptr)
					continue;

				n->p = node;
				break;
			}
		}
	}


	void PrintA()
	{
		for (Node* n = head; n != nullptr; n = n->p)
		{
			cout << n->a << ' ';
		}
		cout << endl;
	}

	void PrintB()
	{
		Node* node = head;
		while (node != nullptr)
		{
			cout << node->b << ' ';
			node = node->p;
		}
		cout << endl;
	}

private:
	struct Node
	{
		T a;
		Y b;
		Node* p;
	};

	Node* head;
};

int main()
{
	size_t n;
	cin >> n;

	List<char, int> list;
	for (size_t i = 0; i < n; ++i)
		list.AddNode(i + 'A', i + 1);

	list.PrintA();
	list.PrintB();

	return 0;
}