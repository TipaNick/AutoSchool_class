#include "kursant.h"

void kursant::init()
{
	fio = "П.П.Пример";
	age = 18;
	email = "ppp@mail.ru";
	phone = "880055535350";
	category = "Б";
}

void kursant::setData()
{
	cout << "Введите ФИО: ";
	cin >> fio;
	cout << "Введите возраст: ";
	cin >> age;
	cout << "Введите почту: ";
	cin >> email;
	cout << "Введите телефон: ";
	cin >> phone;
	cout << "Введите категорию: ";
	cin >> category;
}

void kursant::getData()
{
	cout << "Курсант:\n|| ФИО: ";
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
	cout << " || Категория: ";
	cout.width(2);
	cout << category << " ||\n";
}

string kursant::getFio()
{
	return fio;
}
