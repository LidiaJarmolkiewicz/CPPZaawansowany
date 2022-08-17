#pragma once
#include<cmath>
class Point2D 
{
	int _x, _y;
public:
	
	int getX();
	int getY();
	Point2D(int _x,int _y);
	Point2D(){};
	double showDist(Point2D other);
	
};

class Point3D : public Point2D
{
	int _z;
public:
	
	int getZ();
	Point3D(int _x, int _y, int _z);
	Point3D(){};
};