#include "kursant.h"
#include "instructor.h"
#include "car.h"
#include "manager.h"

#pragma once
class record
{
private:
	kursant *kurs;
	instructor inst;
	manager manag;
	string time;
	car cr;
public:
	record();
	record(kursant &kurs, instructor inst, manager manag, string time, car cr);
	void input();
	void printAll();
};

