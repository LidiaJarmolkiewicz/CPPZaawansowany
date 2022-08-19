#pragma once
#include"Figura.hpp"
class Rectangle :public Figura
{
private:
	double _bok1;
	double _bok2;
public:
	Rectangle();
	Rectangle(double bok1, double bok2);
	~Rectangle();
	void wyswietlBoki() override;
	void zmienBoki()override;
	double obliczPole()override;
	double obliczObwod()override;
	void wyswietlpoleIObwod()override;
};