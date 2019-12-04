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

//outros métodos
void Point2d::print()
{
    cout << "Coordenadas:" << endl;
    cout << "Point2d(" << getX() << "," << getY() << ")" << endl;
}

float Point2d::distancia(Point2d outro)
{
    float x1 = getX();
    float y1 = getY();

    float x2 = outro.getX();
    float y2 = outro.getY();

    float x = x1 - x2;
    float y = y1 - y2;

    float xtotal = pow(x, 2);
    float ytotal = pow(y, 2);

    return sqrt(xtotal + ytotal);
}