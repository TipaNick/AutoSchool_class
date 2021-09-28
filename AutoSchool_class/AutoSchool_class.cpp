#include <iostream>
#include <Windows.h>
#include "kursant.h"
#include "instructor.h"
#include "manager.h"
#include "car.h"
#include "record.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*kursant* kurs2 = new kursant;
    kurs2->getData();
    (*kurs2).getData();
    kurs2[0].getData();*/

    int n = 5;

    //Статичная переменная
    kursant kurs1; //Уже с данным, конструктор
    //Статичный массив
    kursant list_kurs[5]; //Конструктор
    
    //Динамическая переменная
    kursant *kurs2 = new kursant;

    delete kurs2;
    //Динамический массив
    kursant* list_kurs2 = new kursant[n];
    
    for (int i = 0; i < n; i++) {
        list_kurs2[i].printAll();  // считываем числа в ячейки массива
    }

    delete[] list_kurs2;
}

