#include "car.h"

car::car()
{
	model = "Lada Granta";
	num = "А111АА 122";
}

car::car(string model, string num)
{
	this->model = model;
	this->num = num;
}

void car::input()
{
	cout << "Введите модель: ";
	getline(cin, model);
	cout << "Введите номер: ";
	getline(cin, num);
}

void car::printAll()
{
	cout << "Машина:\n|| Модель: ";
	cout.width(model.length() + 3.0);
	cout << model;
	cout.width(0);
	cout << "|| Номер: ";
	cout.width(11);
	cout << num << " ||\n";
}

string car::getNum()
{
	return num;
}
