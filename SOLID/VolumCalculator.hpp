
#pragma once
#include <vector>
#include "Shape3D.hpp"

class VolumCalculator
{
public:
	VolumCalculator(std::vector<Shape3D*> volumes):_volumes(volumes)
	{

	}
	float sumVolumen()
	{
		float retVal = 0.0;
		for (const auto& x : _volumes)
		{
			retVal += x->volume();//obliczamy i dodajemy objetosci elelmentow w wektorze
		}
		return retVal;
	}

private:
	std::vector<Shape3D*> _volumes;
};
