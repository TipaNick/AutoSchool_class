#include "car.h"

void car::init()
{
	model = "Lada Granta";
	num = "�111�� 122";
}

void car::setData()
{
	cout << "������� ������: ";
	getline(cin, model);
	cout << "������� �����: ";
	getline(cin, num);
}

void car::getData()
{
	cout << "������:\n|| ������: ";
	cout.width(model.length() + 3.0);
	cout << model;
	cout.width(0);
	cout << "|| �����: ";
	cout.width(11);
	cout << num << " ||\n";
}
