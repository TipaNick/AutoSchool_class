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
	void init();
	void setData();
	void getData();
	string getFio();
};

