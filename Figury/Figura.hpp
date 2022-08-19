#pragma once
class Figura
{
protected:
	double _pole;
	double _obwod;
public:
	Figura();
	virtual ~Figura();
	virtual void wyswietlBoki()=0;
	virtual void zmienBoki()=0;
	virtual double obliczPole()=0;
	virtual double obliczObwod()=0;
	virtual void wyswietlpoleIObwod()=0;
};
