#pragma once
#include<iostream>
#include<vector>
#include<memory>
#include "Worker.hpp"
class Worker;
class Director
{
public:
	Director(std::vector<std::shared_ptr<Worker>>vecOfWorker,std::string name):_vecOfWorker(vecOfWorker),_name(name) {};
	void print();
	std::string getNameD();
	void setDirectorForWorkers();

private:
	std::string _name;
	std::vector<std::shared_ptr<Worker>>_vecOfWorker;
	

};