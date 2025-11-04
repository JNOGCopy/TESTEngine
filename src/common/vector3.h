#pragma once

struct Vector3{
private:
    float m_x = 0;
    float m_y = 0;
    float m_z = 0;
public:
    Vector3();
    Vector3(float, float, float);

    float getX() const;
    float getY() const;
    float getZ() const;

    void setX(float);
    void setY(float);
    void SetZ(float);
};