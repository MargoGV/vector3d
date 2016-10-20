#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    int x;
    int y;
    int z;


    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    vector3d();
    vector3d(int x ,int y, int z);
    int getX();
    int getY();
    int getZ();
    vector3d operator+(vector3d a);
    vector3d operator-(vector3d a);
    vector3d operator*(vector3d a);
    int vector3d::lenght(vector3d a);
};

// TODO: дописать

#endif
