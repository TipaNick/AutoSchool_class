#include "kursant.h"
#include "instructor.h"
#include "car.h"
#include "manager.h"

#pragma once
class record
{
private:
	kursant kurs;
	instructor inst;
	manager manag;
	string time;
	car cr;
public:
	void init();
	void setData();
	void getData();
};

