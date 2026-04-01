//create.cpp
//创建员工数据
#include<iostream>
using namespace std;
#include"employee.h"

employee* create()
{
    int num;
    string name, pos;
    bool gender;
    //date birth;

    cout << "请分别输入职工的编号,姓名,性别,职位" << endl;
    cin >> num >> name >> gender >> pos;
    cout << "请分别输入职工生日的年月日" << endl;
    int y, m, d;
    cin >> y >> m >> d;
    /*birth.SetYear(y);
    birth.SetMonth(m);
    birth.SetDay(d);*/
    //int n, string N, string p, bool g, int dy, int dm, int dd
    employee* p = new employee(num, name, pos, gender, y, m, d);
    return p;
}
