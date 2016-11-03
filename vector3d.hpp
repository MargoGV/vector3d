#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>


class vector3d {
public:
    double x;
    double y;
    double z;


    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    vector3d();
    vector3d(double x ,double y, double z);
    vector3d operator+(const vector3d a)const;
    vector3d operator-(const vector3d a)const;
    double operator*(const vector3d a)const;
    double length();
    vector3d operator^(const vector3d a)const;
    bool operator==(const vector3d a)const;
    bool operator!=(const vector3d a)const;
    double normalize();
    vector3d operator*(int b)const;
    vector3d operator-()const;
};

vector3d operator*(int b, const vector3d a);
std::ostream &operator<<(std::ostream &stream, const vector3d &a);
#endif


