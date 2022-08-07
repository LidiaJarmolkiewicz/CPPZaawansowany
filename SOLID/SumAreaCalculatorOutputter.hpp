#pragma once
#include <iostream>

#include "AreaCalculator.hpp"

class SumAreaCalulatorOutputter
{
public:
	SumAreaCalulatorOutputter(AreaCalculator areaCalc)
		: _areaCalc(areaCalc)
	{
	}

	void outputCout() //aby ta metoda dzia³a³š te¿ dla VolumeCalc trzeba wydzielic klase bazowš dla obu Calculator(z czysto virtualna metoda sum)  i u¿ywaæ polimorfizmu
	{
		std::cout << "Summed area is equal to: " << _areaCalc.sum() << std::endl;
	}

private:
	AreaCalculator _areaCalc;
};