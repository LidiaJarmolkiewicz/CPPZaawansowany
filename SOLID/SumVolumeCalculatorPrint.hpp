#pragma once
#include<iostream>
#include"VolumCalculator.hpp"

class SumVolumeCalculatorPrint
	
{
public:
	SumVolumeCalculatorPrint(VolumCalculator volumeCalculator) :_volumCalculator(volumeCalculator)
	{

	}
	void printValue()
	{
		std::cout << "summed volume area is=" << _volumCalculator.sumVolumen();
	}

private:
	VolumCalculator _volumCalculator;
};