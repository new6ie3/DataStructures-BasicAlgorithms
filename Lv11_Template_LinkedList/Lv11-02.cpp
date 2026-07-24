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

		void push_front(T data)
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
				Node* new_Head = new Node();
				new_Head->data = data;
				new_Head->back = mHead;
				mHead = new_Head;
			}
		}

		void pop_back()
		{
			if (mHead == nullptr)
				return;

			if (mHead == mTail)
			{
				delete mHead;
				mHead = nullptr;
				mTail = nullptr;
				return;
			}

			for (Node* p = mHead; p != nullptr; p = p->back)
			{
				if (p->back == mTail)
				{
					delete mTail;
					mTail = p;
					mTail->back = nullptr;
					return;
				}
			}

		}

		void pop_front()
		{
			if (mHead == nullptr)
				return;

			Node* next = mHead->back;
			delete mHead;
			mHead = next;

			if (mHead == nullptr)
				mTail = nullptr;
		}

		void remove(T data)
		{
			Node* current = mHead;
			Node* prev = nullptr;

			while (current != nullptr)
			{
				if (current->data == data)
				{
					Node* next = current->back;

					if (prev == nullptr)	// Ã¹ ³ëµå
					{
						mHead = next;
					}
					else
					{
						prev->back = next;
					}

					if (current == mTail)
						mTail = prev;

					delete current;
					current = next;
				}
				else
				{
					prev = current;
					current = current->back;
				}
			}
		}

		size_t size()
		{
			size_t count = 0;
			for (Node* p = mHead; p != nullptr; p = p->back)
				count++;

			return count;
		}

		void print_data()
		{
			for (Node* p = mHead; p != nullptr; p = p->back)
			{
				cout << p->data << ' ';
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
	yaList.push_front(5);
	yaList.pop_front();
	yaList.pop_back();
	yaList.remove(2);

	yaList.print_data();
	int len = yaList.size();
	return 0;
}