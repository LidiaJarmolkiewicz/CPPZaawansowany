#include <iostream>
#include "AreaCalculator.hpp"
#include "SumAreaCalculatorOutputter.hpp"
#include "SumVolumeCalculatorPrint.hpp"
#include"VolumCalculator.hpp"
#include "Square.hpp"
#include "Circle.hpp"
#include"Cube.hpp"

int main()
{
	std::vector<Shape2D*> shapes;

	//shapes.push_back(new Square(3.4));
	//shapes.push_back(new Square(7.0));
	//shapes.push_back(new Square(1.7));
	//shapes.push_back(new Square(2.5));
	shapes.push_back(new Square(5.0));
	//shapes.push_back(new Circle(5.0));
	//shapes.push_back(new Circle(1.3));

	AreaCalculator areaCalc(shapes);
	SumAreaCalulatorOutputter areaOutputter(areaCalc);
	areaOutputter.outputCout();

	std::vector<Shape3D*>volumes;
	
	volumes.push_back(new Cube(3.0));
	VolumCalculator volCalc(volumes);
	SumVolumeCalculatorPrint volumePrint(volCalc);
	volumePrint.printValue();


	for (auto it = shapes.begin(); it != shapes.end(); it++)
	{
		delete* it;
	}

	for (auto it = volumes.begin(); it != volumes.end(); it++)
	{
		delete* it;
	}
}