#include "DiamondProblem.hpp"
#include<iostream>

Car::Car()
{
	std::cout << "konstruktor Car" << std::endl;
}

Car::~Car()
{
	std::cout << "destruktor Car" << std::endl;
}

void Car::drive()
{
	std::cout << "Car drive" << std::endl;
}

ElectricCar::ElectricCar()
{
	std::cout << "konstruktor ElectricCar" << std::endl;
}

ElectricCar::~ElectricCar()
{
	std::cout << "destruktor ElectricCar" << std::endl;
}

void ElectricCar::drive()
{
	std::cout << "ElectricCar drive" << std::endl;
	
}

Tesla::Tesla()
{
	std::cout << "konstruktor Tesla" << std::endl;
}

Tesla::~Tesla()
{
	std::cout << "destruktor Tesla" << std::endl;
}

void Tesla::drive()
{
	std::cout << "Tesla drive" << std::endl;
}

AutoTransmissionCar::AutoTransmissionCar()
{
	std::cout << "konstruktor AutoTransmissionCar" << std::endl;
}

AutoTransmissionCar::~AutoTransmissionCar()
{
	std::cout << "destruktor AutoTransmissionCar " << std::endl;
}

void AutoTransmissionCar::drive()
{
	std::cout << "AutoTransmissionCar drive" << std::endl;
}
