#include "instructor.h"

instructor::instructor()
{
	fio = "�.�.������";
	age = 35;
	email = "pvp@mail.ru";
	phone = "+79132776449";
	exp = 12;
}

instructor::instructor(string fio, int age, string email, string phone, int exp)
{
	this->fio = fio;
	this->age = age;
	this->email = email;
	this->phone = phone;
	this->exp = exp;
}

void instructor::input()
{
	cout << "������� ���: ";
	cin >> fio;
	cout << "������� �������: ";
	cin >> age;
	cout << "������� �����: ";
	cin >> email;
	cout << "������� �������: ";
	cin >> phone;
	cout << "������� ����: ";
	cin >> exp;
}

void instructor::printAll()
{
	cout << "����������:\n|| ���: ";
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
	cout << " || ���� ������: ";
	cout.width(2);
	cout << exp << " ||\n";
}

string instructor::getFio()
{
	return fio;
}
