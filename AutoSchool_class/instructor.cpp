#include "instructor.h"

instructor::instructor()
{
	fio = "П.В.Пример";
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
	cout << "Введите ФИО: ";
	cin >> fio;
	cout << "Введите возраст: ";
	cin >> age;
	cout << "Введите почту: ";
	cin >> email;
	cout << "Введите телефон: ";
	cin >> phone;
	cout << "Введите стаж: ";
	cin >> exp;
}

void instructor::printAll()
{
	cout << "Инструктор:\n|| ФИО: ";
	cout.width(15);
	cout << fio;
	cout.width(0);
	cout << " || Возраст: ";
	cout.width(3);
	cout << age;
	cout.width(0);
	cout << " || Почта: ";
	cout.width(20);
	cout << email;
	cout.width(0);
	cout << " || Телефон: ";
	cout.width(11);
	cout << phone;
	cout.width(0);
	cout << " || Стаж работы: ";
	cout.width(2);
	cout << exp << " ||\n";
}

string instructor::getFio()
{
	return fio;
}
