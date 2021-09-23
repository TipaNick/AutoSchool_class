#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once
class instructor
{
private:
    string fio;
    int age;
    string email;
    string phone;
    int exp;
public:
    instructor();
    instructor(string fio, int age, string email, string phone, int exp);
    void input();
    void printAll();
    string getFio();
};

