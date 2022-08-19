#pragma once
#include"Figura.hpp"
class Triangle:public Figura
{
private:
	double _bok1;
	double _bok2;
	double _bok3;
public:
	Triangle();
	Triangle(double bok1, double bok2, double bok3);
	~Triangle();
	void wyswietlBoki()override;
	void zmienBoki()override;
	double obliczPole()override;
	double obliczObwod()override;
	void wyswietlpoleIObwod()override;
};