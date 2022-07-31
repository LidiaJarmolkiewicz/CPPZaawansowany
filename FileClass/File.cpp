#include "File.hpp"

Pracownik::~Pracownik()
{
}

std::string Pracownik::getName()
{
	return _name;
}

std::string Pracownik::getSecondName()
{
	return _secondName;
}

int Pracownik::getIdNumber()
{
	return _idNumber;
}

int Pracownik::getSalary()
{
	return _salary;
}
