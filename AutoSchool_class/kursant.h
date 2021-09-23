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
    kursant();
    kursant(string fio, int age, string email, string phone, string category);
    void input();
    void printAll();
    string getFio();
};

