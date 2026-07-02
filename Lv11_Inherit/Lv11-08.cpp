#include <iostream>

using namespace std;

class Notification
{
public:
	virtual void Send() const = 0;
};

class EmailNotification : public Notification
{
public:
	EmailNotification(const char* _email)
	{
		strcpy_s(email, _email);
	}

	void Send() const override
	{
		cout << email << endl;
	}

private:
	char email[20];
};

class SMSNotification : public Notification
{
public:
	SMSNotification(const char* _sms)
	{
		strcpy_s(sms, _sms);
	}

	void Send() const override
	{
		cout << sms << endl;
	}

private:
	char sms[20];
};

int main()
{
	EmailNotification e("kim@example.com");
	SMSNotification s("010-1234-5678");

	Notification* notices[] = { &e, &s };
	for (int i = 0; i < 2; ++i)
		notices[i]->Send();

	return 0;
}