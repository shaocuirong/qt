//change.cpp
//用于实现修改员工数据的功能
#include"employee.h"

void change(employee e[],int n)
{
    int num;
    cout << "请输入要修改信息的员工编号" << endl;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (e[i].num == num)
        {
            e[i].set();
        }
    }
}