#pragma once
#include<iostream>
class Director;
class Worker
{public:
	Worker(std::string name,std::string secondName):_name(name),_secondName(secondName){};
	void setDirector(Director* director);
	std::string getNameW();
	std::string getSecondName();

private:
	std::string _name;
	std::string _secondName;
	Director* _director;
};

