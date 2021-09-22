#include "instructor.h"

void instructor::init()
{
	fio = "П.П.Пример";
	age = 18;
	email = "ppp@mail.ru";
	phone = "880055535350";
	exp = 7;
}

void instructor::setData()
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

void instructor::getData()
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
