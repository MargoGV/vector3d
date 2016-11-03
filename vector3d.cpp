
#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};
vector3d::vector3d() :x(0),y(0),z(0) {}
vector3d::vector3d(double x, double y, double z) :x(x),y(y),z(z) {}


vector3d vector3d::operator+(const vector3d a)const
{
    int resx=a.x+ x;
    int resy=a.y+ y;
    int resz=a.z+ z;
    return vector3d(resx, resy, resz);
}
vector3d vector3d::operator-(const vector3d a)const
{
    int resx= x- a.x;
    int resy= y- a.y;
    int resz= z- a.z;
    return vector3d(resx, resy, resz);
}
double vector3d::operator*(const vector3d a)const
{
    int resx= x*a.x;
    int resy= y*a.y;
    int resz= z*a.z;
    return resx+resy+resz;
}
vector3d vector3d::operator-()const
{
    return vector3d(-x,-y,-z);
}
vector3d vector3d::operator^(const vector3d a)const
{
    int resx= (y*a.z - z*a.y);
    int resy= (z*a.x - x*a.z);
    int resz= (x*a.y - y*a.x);
    return vector3d(resx, resy, resz);
}
bool vector3d::operator==(const vector3d a)const
{
    return (x==a.x and y==a.y and z==a.z);
}

bool vector3d::operator!=(const vector3d a)const
{
    return (x!=a.x or y!=a.y or z!=a.z);
}
vector3d vector3d::operator*(int b)const
{
    return vector3d(x*b,y*b,z*b);
}
vector3d operator*(int b, const vector3d a)
{
    return vector3d(a.x*b,a.y*b,a.z*b);
}
double vector3d::length()
{
    return std::sqrt(x*x+y*y+z*z);
}
double vector3d::normalize()
{
    double lenght=length();
    x=x/lenght;
    y=y/lenght;
    z=z/lenght;
}
std::ostream &operator<<(std::ostream &stream, const vector3d &a)
{

    return stream << "{" << a.x << ", " << a.y << ", " << a.z << "}";
}
