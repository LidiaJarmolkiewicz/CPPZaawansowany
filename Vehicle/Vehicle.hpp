#pragma once
#include <iostream>
#include <string>

class Vehicle
{
public:
	Vehicle();
	virtual  ~Vehicle();
	virtual void drive() = 0;
};
class Bicycle :public Vehicle
{
public:
	Bicycle();
	~Bicycle();
	void drive() override;
};
class Bus :public Vehicle
{
public:
	Bus();
	~Bus();
	void drive() override;
};
