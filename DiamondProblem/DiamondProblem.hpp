#pragma once
class Car
{public:
	Car();
	virtual ~Car();
 virtual void drive();

};
class ElectricCar:virtual public Car
	 
{
public:
	ElectricCar();
	virtual~ElectricCar();
	void drive() override;
};

class AutoTransmissionCar:virtual public Car
{
public:
	AutoTransmissionCar();
	virtual~AutoTransmissionCar();
	void drive() override;
};
class Tesla :public ElectricCar, public AutoTransmissionCar
{
public:
	Tesla();
	virtual~Tesla();
	void drive()override;

};