//date.h
#pragma once

#include<iostream>
using namespace std;

class date
{
public:
    int year, month, day;
    //头文件只写函数的声明
    void SetYear(int y);
    void SetMonth(int month);
    void SetDay(int day);
    void GetYear();
    void GetMonth();
    void GetDay();
};
