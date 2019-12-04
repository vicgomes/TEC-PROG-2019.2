#include "point.h"


//CONSTRUTORES
Point2d::Point2d()
{
    setX(0);
    setY(0);
}

Point2d::Point2d(float x, float y)
{
    m_x = x;
    m_y = y;
}

//SETTERS E GETTERS
void Point2d::setX(float x)
{
    m_x = x;   
}

void Point2d::setY(float y)
{
    m_y = y;
}

float Point2d::getX()
{
    return m_x;
}

float Point2d::getY()
{
    return m_y;
}

//PRINT
void Point2d::print()
{
    cout << "Coordenadas:" << endl;
    cout << "Point2d(" << getX() << "," << getY() << ")" << endl;
}