#include "car.h"

car::car()
{
	model = "Lada Granta";
	num = "�111�� 122";
}

car::car(string model, string num)
{
	this->model = model;
	this->num = num;
}

void car::input()
{
	cout << "������� ������: ";
	getline(cin, model);
	cout << "������� �����: ";
	getline(cin, num);
}

void car::printAll()
{
	cout << "������:\n|| ������: ";
	cout.width(model.length() + 3.0);
	cout << model;
	cout.width(0);
	cout << "|| �����: ";
	cout.width(11);
	cout << num << " ||\n";
}

string car::getNum()
{
	return num;
}
