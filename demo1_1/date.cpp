//date.cpp
//date类的成员函数实现
#include"date.h"
void date::SetYear(int y)
{
    year = y;
}
void date::SetMonth(int month)
{
    this->month = month;
}
void date::SetDay(int day)
{
    this->day = day;
}
void date::GetYear()
{
    cout << "出生日期: ";
    cout << year << " 年";
}
void date::GetMonth()
{
    cout << month << " 月";
}
void date::GetDay()
{
    cout << day << " 日";
}
