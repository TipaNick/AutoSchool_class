#include "manager.h"

void manager::init()
{
	fio = "�.�.������";
	age = 25;
	phone = "+79132776447";
}

void manager::setData()
{
	cout << "������� ���: ";
	cin >> fio;
	cout << "������� �������: ";
	cin >> age;
	cout << "������� �������: ";
	cin >> phone;
}

void manager::getData()
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
