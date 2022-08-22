#include <iostream>
#include<memory>
#include"Director.hpp"
#include"Worker.hpp"
int main() 
{
	std::vector<std::shared_ptr<Worker>> listOfWorker;
	listOfWorker.push_back(std::make_shared<Worker>("Ala", "Kot"));
	listOfWorker.push_back(std::make_shared<Worker>("Ola", "Ropa"));
	listOfWorker.push_back(std::make_shared<Worker>("Jan", "Walec"));
	Director dir(listOfWorker, "Kowalski");
	dir.print();
}