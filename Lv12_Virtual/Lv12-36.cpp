#include <iostream>

using namespace std;

class Logger
{
public:
	virtual void Log(string message) const = 0;
};

class ConsoleLogger : public Logger
{
public:
	void Log(string message) const override
	{
		cout << message << endl;
	}
};

class FileLogger : public Logger
{
public:
	void Log(string message) const override {}	// File Log
};

class NetwokLogger : public Logger
{
public:
	void Log(string message) const override {}	// Network Log
};

int main()
{
	ConsoleLogger console;
	FileLogger file;
	NetwokLogger network;

	Logger* loggers[] = { &console, &file, &network };
	for (int i = 0; i < 3; ++i)
		loggers[i]->Log("System started");

	return 0;
}
