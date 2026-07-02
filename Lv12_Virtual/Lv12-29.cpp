#include <iostream>

using namespace std;
string username = "user111";
string password = "pass456";

class Authenticator
{
public:
	virtual void Authenticate(string _username, string _password) const = 0;
};

class PasswordAuth : public Authenticator
{
public:
	void Authenticate(string _username, string _password) const override
	{
		bool result = (username == _username) && (password == _password);

		if (result) cout << "PasswordAuth 인증 성공" << endl;
		else cout << "PasswordAuth 인증 실패" << endl;
	}
};

class BiometricAuth : public Authenticator
{
public:
	void Authenticate(string _username, string _password) const override
	{
		bool result = (password == _password);

		if (result) cout << "BiometricAuth 인증 성공" << endl;
		else cout << "BiometricAuth 인증 실패" << endl;
	}
};

int main()
{
	PasswordAuth passAuth;
	BiometricAuth bioAuth;

	Authenticator* auths[] = { &passAuth, &bioAuth };
	for (int i = 0; i < 2; ++i)
		auths[i]->Authenticate("users123", "pass456");

	return 0;
}