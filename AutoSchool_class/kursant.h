#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once

class kursant
{
private:
    string fio;
    int age;
    string email;
    string phone;
    string category;
public:
    void init();
    void setData();
    void getData();
    string getFio();
};

