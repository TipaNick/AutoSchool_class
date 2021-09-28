#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
class manager
{
private:
	string fio;
	int age;
	string phone;
public:
	manager();
	manager(string fio, int age, string phone);
	void input();
	void printAll();
	string getFio();
};

