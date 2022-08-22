#pragma once
#include<string>
#include<iostream>
#include<memory>
class Pacjent;

class Doktor
{
	std::shared_ptr<Pacjent> _pacjent;
	std::string _imie;
public:
	Doktor(std::string imie):_imie(imie){};
	void setPacjent(std::shared_ptr<Pacjent> pacjent)
	{
		_pacjent = pacjent;
	} 
	void wizyta() { std::cout<<"doktor: wizyta jest jutro" << std::endl; }
};


class Pacjent
{
	std::string _imie;
	std::shared_ptr<Doktor> _doktor;
	
public:
	Pacjent(std::string imie) :_imie(imie) {};
	void setDoktor(std::shared_ptr<Doktor> doktor)
	{
		_doktor = doktor;
	}
	void odpowiedzP() { std::cout << "pacjent : bede"; }
};