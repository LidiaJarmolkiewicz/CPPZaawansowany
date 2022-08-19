#include"DiamondProblem.hpp"
int main()
{
	Car* car = nullptr;
	car = new Tesla();
	car->drive();
	delete car;
};