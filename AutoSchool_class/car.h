#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
class car
{
private:
	string model;
	string num;
public:
	car();
	car(string model, string num);
	void input();
	void printAll();
	string getNum();
};

