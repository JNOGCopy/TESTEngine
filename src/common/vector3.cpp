#include "vector3.h"


Vector3::Vector3()
{
    
}

Vector3::Vector3(float x, float y, float z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

float Vector3::getX() const
{
    return m_x;
}

float Vector3::getY() const
{
    return m_y;
}

float Vector3::getZ() const
{
    return m_z;
}

void Vector3::setX(float x)
{
    m_x = x;
}

void Vector3::setY(float y)
{
    m_y = y;
}

void Vector3::SetZ(float z)
{
    m_z = z;
}
