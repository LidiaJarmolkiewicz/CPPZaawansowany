
#pragma once
#include "Shape3D.hpp"
class Cube : public Shape3D
{
	public:
	Cube(float sideCube):_sideCube(sideCube)
	{

	}
	~Cube() = default;
	float volume() const
	{ 
		return  _sideCube * _sideCube * getCube();
	}
	float getCube() const
	{
		return _sideCube;
	}
	void setCube(float sideCube)
	{
		_sideCube = sideCube;
	}
private:
	float _sideCube;
};
