#include "instructor.h"

void instructor::init()
{
	fio = "�.�.������";
	age = 18;
	email = "ppp@mail.ru";
	phone = "880055535350";
	exp = 7;
}

void instructor::setData()
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

void instructor::getData()
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
