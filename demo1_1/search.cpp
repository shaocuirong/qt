//search.cpp
//根据工号查找员工的全局函数
#include"employee.h"
//通过友元让全局函数能够访问类的私有成员

void first_search(employee e[10])
{
    cout << "1.通过编号查询;2.通过员工姓名查询" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        int num;
        cout << "请输入员工编号" << endl;
        cin >> num;
        search(num, e);
    }
    else
    {
        string s;
        cout << "请输入员工姓名" << endl;
        cin >> s;
        search(s, e);
    }
}
void search(int n,employee e[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (e[i].num == n)
            e[i].show();
    }
}
void search(string name, employee e[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (e[i].name == name)
            e[i].show();
    }
}
