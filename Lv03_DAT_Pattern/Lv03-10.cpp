#include <iostream>

using namespace std;

class Person
{
public:
	void SetName()
	{
		cout << "이름을 입력하세요 : ";
		cin >> name;
	}

	void SetAddress()
	{
		cout << "주소를 입력하세요 : ";
		cin >> address;
	}

	void SetPhone()
	{
		cout << "연락처를 입력하세요 : ";
		cin >> phone;
	}

	void SetId()
	{
		cout << "Id를 입력하세요 : ";
		cin >> id;
	}
	
	void SetMileage()
	{
		cout << "마일리지를 입력하세요 : ";
		cin >> mileage;
	}

	char* GetName() { return name; }
	char* GetAddress() { return address; }
	char* GetPhone() { return phone; }
	size_t GetId() { return id; }
	size_t GetMileage() { return mileage; }

	void PrintPersonInfo()
	{
		cout << "----- 고객 정보 -----" << endl;
		cout << "이름 : " << name << endl;
		cout << "주소 : " << address << endl;
		cout << "연락처 : " << phone << endl;
		cout << "고객ID : " << id << endl;
		cout << "마일리지 : " << mileage << endl;
	}

private:
	char name[20];
	char address[20];
	char phone[20];
	size_t id;
	size_t mileage;
};

int main()
{
	Person person;

	person.SetName();
	person.SetAddress();
	person.SetPhone();
	person.SetId();
	person.SetMileage();

	person.PrintPersonInfo();

	return 0;
}