#include "kursant.h"

void kursant::init()
{
	fio = "�.�.������";
	age = 18;
	email = "ppp@mail.ru";
	phone = "880055535350";
	category = "�";
}

void kursant::setData()
{
	cout << "������� ���: ";
	cin >> fio;
	cout << "������� �������: ";
	cin >> age;
	cout << "������� �����: ";
	cin >> email;
	cout << "������� �������: ";
	cin >> phone;
	cout << "������� ���������: ";
	cin >> category;
}

void kursant::getData()
{
	cout << "�������:\n|| ���: ";
	cout.width(15);
	cout << fio;
	cout.width(0);
	cout << " || �������: ";
	cout.width(3);
	cout << age;
	cout.width(0);
	cout << " || �����: ";
	cout.width(20);
	cout << email;
	cout.width(0);
	cout << " || �������: ";
	cout.width(11);
	cout << phone;
	cout.width(0);
	cout << " || ���������: ";
	cout.width(2);
	cout << category << " ||\n";
}

string kursant::getFio()
{
	return fio;
}
