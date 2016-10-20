#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};
vector3d::vector3d() :x(0),y(0),z(0) {}
vector3d::vector3d(int x, int y, int z) :x(x),y(y),z(z) {}
int vector3d::getX() {return x; }
int vector3d::getZ() {return z; }
int vector3d::getY() {return y; }

vector3d vector3d::operator+(vector3d a)
{
    int resx=a.getX()+ getX();
    int resy=a.getY()+ getY();
    int resz=a.getZ()+ getZ();
    return vector3d(resx, resy, resz);
}
vector3d vector3d::operator-(vector3d a)
{
    int resx= getX()- a.getX();
    int resy= getY()- a.getY();
    int resz= getZ()- a.getZ();
    return vector3d(resx, resy, resz);
}
vector3d vector3d::operator*(vector3d a)
{
    int resx= getX()*a.getX();
    int resy= getY()*a.getY();
    int resz= getZ()*a.getZ();
    return vector3d(resx, resy, resz);
}
int vector3d::lenght(vector3d a)
{
    return std::sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
}
