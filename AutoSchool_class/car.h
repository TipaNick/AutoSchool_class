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
	void init();
	void setData();
	void getData();
};

