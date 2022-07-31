#pragma once
#include<string>
#include <fstream>
#include<iostream>
#include<random>

class File
{
public:
	File(std::string fileName)
	{
		myFileStream = std::fstream(fileName);
		if (!myFileStream.is_open())
		{
			throw std::string("nie mozna otworzyc pliku");
		}
	};
	~File()
	{
		myFileStream.close();
	}
	//przeciazyc operator<<  and operator>>
	//
private:
	std::fstream myFileStream;
	
};

class Pracownik
{
public:
	Pracownik(std::string name, std::string secondName,int idNumber,int salary):_name(name),_secondName(secondName),_salary(salary)
	{
		
		std::random_device dr;
		std::default_random_engine engine(dr()); 
		std::uniform_int_distribution<int> distr(1,100);
		 idNumber =distr(engine);
		 _idNumber = idNumber;		
	};
	~Pracownik();

	
	std::string getName();
	std::string getSecondName();
	int getIdNumber();
	int getSalary();
private:
	std::string _name;
	std::string _secondName;
	int _idNumber;
	int _salary;

};

