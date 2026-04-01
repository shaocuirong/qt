#include "xxxpoint.h"

XXXPoint::XXXPoint() : m_x(0), m_y(0) {} // 初始化列表初始化成员

XXXPoint::XXXPoint(int xPos, int yPos) : m_x(xPos), m_y(yPos) {}

int XXXPoint::getX() const { return m_x; }
int XXXPoint::getY() const { return m_y; }
void XXXPoint::setX(int xPos) { m_x = xPos; }
void XXXPoint::setY(int yPos) { m_y = yPos; }
