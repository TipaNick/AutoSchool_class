﻿#include <iostream>
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

    kursant kurs1;
    kurs1.init();
    kurs1.getData();

    instructor inst1;
    inst1.init();
    inst1.getData();

    manager manag1;
    manag1.init();
    manag1.getData();

    car cr1;
    cr1.init();
    cr1.getData();

    record rec1;
    rec1.init();
    rec1.getData();
}

