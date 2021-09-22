#include "record.h"

void record::init()
{
	kurs.init();
	inst.init();
	manag.init();
	time = "22.09.2021 23:53";
	cr.init();
}

void record::setData()
{
	kurs.setData();
	inst.setData();
	manag.setData();
	cout << "������� ����� ������: ";
	cin >> time;
	cr.setData();
}

void record::getData()
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
