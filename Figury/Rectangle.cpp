#include"Rectangle.hpp"

#include<iostream>
Rectangle::Rectangle():_bok1(0.0),_bok2(0.0)
{
}
Rectangle::Rectangle(double bok1, double bok2) :_bok1(bok1), _bok2(bok2)
{
	_pole = this->obliczPole();
	_obwod = this->obliczObwod();
}

Rectangle::~Rectangle()
{
}

void Rectangle::wyswietlBoki()
{
	std::cout << " bok1 = " << _bok1<< " bok2 = " << _bok2<<std::endl;
}

void Rectangle::zmienBoki()
{
	std::cout << "podaj bok1 " << std::endl;
	std::cin >> _bok1;
	std::cout << "podaj bok2 " << std::endl;
	std::cin >> _bok2;
	_pole = this->obliczPole();
	_obwod = this->obliczObwod();
}

double Rectangle::obliczPole()
{
	return _bok1*_bok2;
}

double Rectangle::obliczObwod()
{
	return 2*_bok1+2*_bok2;
}

void Rectangle::wyswietlpoleIObwod()
{
	std::cout << "pole prostokata  = " << _pole << " obwod prostokata = " << _obwod << std::endl;
}
