#include "car.h"

void car::init()
{
	model = "Lada Granta";
	num = "А111АА 122";
}

void car::setData()
{
	cout << "Введите модель: ";
	getline(cin, model);
	cout << "Введите номер: ";
	getline(cin, num);
}

void car::getData()
{
	cout << "Машина:\n|| Модель: ";
	cout.width(model.length() + 3.0);
	cout << model;
	cout.width(0);
	cout << "|| Номер: ";
	cout.width(11);
	cout << num << " ||\n";
}
