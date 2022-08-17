

#include "Point.hpp"



int Point2D::getX()
{
    return _x;
}
int Point2D::getY()
{
    return _y;
}

Point2D::Point2D(int x, int y) : _x(x),_y(y)
{
}

double Point2D::showDist(Point2D other)
{
    int distance;
    if (_x == other._x)
    {
        distance = abs(_y - other._y);
       
    }
    else if (_y == other._y)
    {
        distance = abs(_x - other._x);
        
    }
    else
    {
        int distanceX = abs(other._x - _x);
        int distanceY = abs( other._y - _y);
         distance = sqrt(pow(distanceX, 2) + pow(distanceY, 2));
         
    };

    return distance;
}



int Point3D::getZ()
{
    return _z;
}

Point3D::Point3D(int x, int y, int z):Point2D(x,y),_z(z)
{
}
