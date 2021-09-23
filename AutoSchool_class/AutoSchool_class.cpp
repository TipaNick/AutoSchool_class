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

    kursant kurs1;
    kurs1.printAll();

    kursant kurs2("Привет", 18, "123", "123", "123");
    kurs2.printAll();


}

