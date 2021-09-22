#include "manager.h"

void manager::init()
{
	fio = "П.В.Пример";
	age = 25;
	phone = "+79132776447";
}

void manager::setData()
{
	cout << "Введите ФИО: ";
	cin >> fio;
	cout << "Введите возраст: ";
	cin >> age;
	cout << "Введите телефон: ";
	cin >> phone;
}

void manager::getData()
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
