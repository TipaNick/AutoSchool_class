#include "manager.h"

manager::manager()
{
	fio = "П.В.Пример";
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
	cout << "Введите ФИО: ";
	cin >> fio;
	cout << "Введите возраст: ";
	cin >> age;
	cout << "Введите телефон: ";
	cin >> phone;
}

void manager::printAll()
{
	cout << "Менеджер:\n|| ФИО: ";
	cout.width(15);
	cout << fio;
	cout.width(0);
	cout << " || Возраст: ";
	cout.width(3);
	cout << age;
	cout.width(0);
	cout << " || Телефон: ";
	cout.width(11);
	cout << phone << " ||\n";
}

string manager::getFio()
{
	return fio;
}
