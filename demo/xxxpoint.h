#ifndef XXXPOINT_H
#define XXXPOINT_H

class XXXPoint
{
public:
    XXXPoint(); // 默认构造函数
    XXXPoint(int xPos, int yPos); // 带参数的构造函数
    int getX() const; // 访问器
    int getY() const;
    void setX(int xPos);
    void setY(int yPos);

private:
    int m_x; // 成员变量，储存x坐标
    int m_y; // 成员变量，储存y坐标
};

#endif // XXXPOINT_H
