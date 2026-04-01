//head.h
#pragma once
//这里只需要包含其他头文件
#include"employee.h"
#include"date.h"
//#include"show_menu.cpp"原来你不需要包含进来啊！！
void show_menu();
employee* create();
void first_search(employee[]);
void search(int ,employee []);
void search(string, employee[]);
void print_list(employee[],int i);
void change(employee[],int i);
