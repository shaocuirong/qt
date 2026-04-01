#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
public:
    const char *name;
    int age;
    float score;

    void say();  // 只声明
};

#endif