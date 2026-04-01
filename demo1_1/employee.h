//employee.h
#pragma once
#include"date.h"
class employee
{
    friend void search(int, employee[]);
    friend void search(string, employee[]);
    friend void change(employee[], int);
private:
    int num;
    string name, pos;
    bool gender;
    date birth;
public:
    void set();
    void show();
    employee(int, string, string, bool, int, int, int);
    employee() {};
};