//employee.cpp
//employee类成员函数的实现
#include<iostream>
#include"employee.h"
using namespace std;

void employee::show()//只输出单个员工的信息
{
    cout << "编号:" << num;
    cout << "  姓名:" << name;
    if (gender)cout << "  性别：男";
    else cout << "  性别：女";
    birth.GetYear(); birth.GetMonth(); birth.GetDay();
    cout << "  职位:" << pos << endl;
}

void employee::set()
{
    cout << "请分别输入职工的编号,姓名,性别,职位" << endl;
    cin >> num >> name >> gender >> pos;
    cout << "请分别输入职工生日的年月日" << endl;
    int y, m, d;
    cin >> y >> m >> d;
    birth.SetYear(y);
    birth.SetMonth(m);
    birth.SetDay(d);
}
//没有默认参数的构造函数
employee::employee(int n, string N, string p, bool g, int dy, int dm, int dd)
        : num(n), name(N), pos(p), gender(g)
{
    birth.SetYear(dy);
    birth.SetMonth(dm);
    birth.SetDay(dd);
}

