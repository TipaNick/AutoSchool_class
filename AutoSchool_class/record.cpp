#include "record.h"

record::record()
{
	time = "22.09.2021 23:53";
}

record::record(kursant kurs, instructor inst, manager manag, string time, car cr)
{
	this->kurs = kurs;
	this->inst = inst;
	this->manag = manag;
	this->time = time;
	this->cr = cr;
}

void record::input()
{
	kurs.input();
	inst.input();
	manag.input();
	cout << "������� ����� ������: ";
	cin >> time;
	cr.input();
}

void record::printAll()
{
	cout << "������:\n|| ��� ��������: ";
	cout.width(15);
	cout << kurs.getFio();
	cout.width(0);
	cout << " || ��� �����������: ";
	cout.width(15);
	cout << inst.getFio();
	cout.width(0);
	cout << " || �����: ";
	cout.width(17);
	cout << time;
	cout.width(0);
	cout << "\n|| ������: ";
	cout.width(11);
	cout << cr.getNum();
	cout.width(0);
	cout << " || ��� ���������: ";
	cout.width(15);
	cout << manag.getFio() << " ||\n";
}
