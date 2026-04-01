//print_list.cpp
//负责打印员工数据的全局函数
#include"head.h"
void print_list(employee e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        e[i].show();
    }
}

