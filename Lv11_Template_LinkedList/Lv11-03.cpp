#include <iostream>

using namespace std;

namespace ya
{
	template <typename T>
	class list
	{
	public:
		struct Node
		{
			T data;
			Node* back;
		};

		struct iterator
		{
			iterator(Node* node = nullptr) : p(node) {}

			Node* p;

			bool operator!=(const iterator& other) const
			{
				return p != other.p;
			}

			void operator++()
			{
				p = p->back;
			}

			T operator*()
			{
				return p->data;
			}
		};
		
		iterator begin() const
		{
			return iterator(mHead);
		}

		iterator end() const
		{
			return iterator(nullptr);
		}

		list()
		{
			mHead = nullptr;
			mTail = nullptr;
		}

		~list()
		{
			Node* current = mHead;
			while (current != nullptr)
			{
				Node* next = current->back;
				delete current;
				current = next;
			}

			mHead = nullptr;
			mTail = nullptr;
		}

		void push_back(T data)
		{
			if (mHead == nullptr) 
			{
				mHead = new Node();
				mHead->data = data;
				mHead->back = nullptr;
				mTail = mHead;
			}
			else
			{
				mTail->back = new Node();
				mTail->back->data = data;
				mTail->back->back = nullptr;
				mTail = mTail->back;
			}
		}

	private:
		Node* mHead;
		Node* mTail;
	};
}


int main()
{
	ya::list<int> yaList;
	yaList.push_back(1);
	yaList.push_back(2);
	yaList.push_back(3);

	for (ya::list<int>::iterator iter = yaList.begin(); iter != yaList.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}