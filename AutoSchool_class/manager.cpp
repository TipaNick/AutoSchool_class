#include "manager.h"

manager::manager()
{
	fio = "�.�.������";
	age = 25;
	phone = "+79132776447";
}

manager::manager(string fio, int age, string phone)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
}

void manager::input()
{
	cout << "������� ���: ";
	cin >> fio;
	cout << "������� �������: ";
	cin >> age;
	cout << "������� �������: ";
	cin >> phone;
}

void manager::printAll()
{
	cout << "��������:\n|| ���: ";
	cout.width(15);
	cout << fio;
	cout.width(0);
	cout << " || �������: ";
	cout.width(3);
	cout << age;
	cout.width(0);
	cout << " || �������: ";
	cout.width(11);
	cout << phone << " ||\n";
}

string manager::getFio()
{
	return fio;
}
