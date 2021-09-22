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
	cout << "Введите вермя записи: ";
	cin >> time;
	cr.setData();
}

void record::getData()
{
	cout << "Запись:\n|| ФИО курсанта: ";
	cout.width(15);
	cout << kurs.getFio();
	cout.width(0);
	cout << " || ФИО инструктора: ";
	cout.width(15);
	cout << inst.getFio();
	cout.width(0);
	cout << " || Время: ";
	cout.width(17);
	cout << time;
	cout.width(0);
	cout << "\n|| Машина: ";
	cout.width(11);
	cout << cr.getNum();
	cout.width(0);
	cout << " || ФИО менеджера: ";
	cout.width(15);
	cout << manag.getFio() << " ||\n";
}
