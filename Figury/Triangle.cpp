#include "Triangle.hpp"
#include<iostream>
Triangle::Triangle():_bok1(0.0),_bok2(0.0),_bok3(0.0)
{
}

Triangle::Triangle(double bok1, double bok2, double bok3):_bok1(bok1),_bok2(bok2),_bok3(bok3)
{
	_pole = this->obliczPole();
	_obwod = this->obliczObwod();
}

Triangle::~Triangle()
{
	
}

void Triangle::wyswietlBoki()
{
	std::cout << " bok1 - " << _bok1 << " bok2 - " << _bok2 << " bok3 - " << _bok3 << std::endl;
}

void Triangle::zmienBoki()
{
	std::cout << "podaj bok1 " << std::endl;
	std::cin >> _bok1;
	std::cout << "podaj bok2 " << std::endl;
	std::cin >> _bok2;
	std::cout << "podaj bok3 " << std::endl;
	std::cin >> _bok3;
	_pole = this->obliczPole();
	_obwod = this->obliczObwod();
}

double Triangle::obliczPole()
{
	double p = 0;
	p = (_bok1 + _bok2 + _bok3) / 2;
	_pole = sqrt(p * (p - _bok2) * (p - _bok2) * (p - _bok3));
	return _pole;
}

double Triangle::obliczObwod()
{
	return _bok1 + _bok2 + _bok3;
}

void Triangle::wyswietlpoleIObwod()
{
	std::cout << "pole trojkata = " << _pole << " obwod trojkata = " << _obwod << std::endl;
}
